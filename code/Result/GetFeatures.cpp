#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <fstream>
#include <cassert>
#include <stack>
#include <sstream>
#include <ctime>
#include <map>

class MyException : public std::runtime_error {
public:
    MyException(const std::string& message)
        : std::runtime_error(message) {}
};

std::vector<int> extract_numbers(const std::string& s) {
    std::istringstream iss(s);
    std::vector<int> numbers;
    int number;

	char c;
	while(iss >> c && c != '{') continue;
    while (iss >> c && !isdigit(c)) continue;
	iss.putback(c);
 
    while (iss >> number) {
        numbers.push_back(number);
        
        char c;
        while (iss >> c && !isdigit(c)) continue;
        if (iss.eof()) break;
        iss.putback(c);
    }
 
    return numbers;
}

bool startsWith(const std::string& fullString, const std::string& starting) {
    if (fullString.length() >= starting.length()) {
        return (0 == fullString.compare(0, starting.length(), starting));
    } else {
        return false;
    }
}

struct DecompositionNode{
	int dep,index;
	std::vector<int> Vertices;
	std::vector<int> to;
	DecompositionNode(){dep = 0, Vertices.clear(), to.clear(), index = 0;}
	DecompositionNode(int _dep, std::vector<int> _vec){dep = _dep, Vertices = _vec, to.clear(), index = 0;}
};

DecompositionNode r[105];
int fa[105];
void dfs(int x,int prt){
    r[x].dep = r[prt].dep+1, fa[x]=prt;
    for(int y:r[x].to)
        dfs(y,x);
}
int dis(int x,int y){
    int res = 0;
    while(x != y){
        if(r[x].dep < r[y].dep)std::swap(x,y);
        x=fa[x],++res;
    }
    return res;
}

bool adj[105][105];
bool rec[105][105];
int main(){
    std::ifstream ginfile("/home/zs175/stats102-Final/Result/temp/graph.gr");
	if(!ginfile){
		throw MyException("Cannot open the File - Graph");
		exit(1);
	}
	std::string line;
    while (std::getline(ginfile, line)){
        if(startsWith(line, "edge")){
			int u=0, v=0;
			sscanf(line.c_str(), "edge(%d,%d).", &u, &v);
            adj[u][v] = adj[v][u] = 1;
		}
    }
    for(int i=0;i<=20;i++)adj[i][i]=1;
    for(int k=0;k<=20;k++)
        for(int i=0;i<=20;i++)
            for(int j=0;j<=20;j++)
                rec[i][j]=adj[i][k]|adj[k][j];


    std::ifstream iinfile("/home/zs175/stats102-Final/Result/temp/graph.info");
	if(!iinfile){
		throw MyException("Cannot open the File - Data Information");
		exit(1);
	}
    std::getline(iinfile, line),puts(line.c_str());
    std::getline(iinfile, line),puts(line.c_str());


    std::ifstream infile("/home/zs175/stats102-Final/Result/temp/graph.td");
	if(!infile){
		throw MyException("Cannot open the File - Tree decomposition");
		exit(1);
	}

    std::map<std::string, double> mp;
    std::getline(infile, line), line = '{' + line;

    mp["Tree Width"] = extract_numbers(line)[0];

	std::stack<DecompositionNode> st;
	st.push(DecompositionNode(-1, {}));
    int index = 0;
	while (std::getline(infile, line)){
		int len = line.length(), tot=0;
		if(len == 0)break;
		for(int i=0; i<len; i++)
			if(!isdigit(line[i]))++ tot;
			else break;
		
		std::vector<int> vec = extract_numbers(line);
		r[++index] = DecompositionNode(tot, vec), r[index].index = index;
		while(st.top().dep >= r[index].dep){DecompositionNode lst = st.top();st.pop();}
        r[st.top().index].to.push_back(index);
        st.push(r[index]);
	}

    int numVertices = index, sumBagsize = 0, sumDepth = 0, numJoin = 0, numIntro = 0, numForget = 0, numLeaf = 0;
    dfs(1, 0);
    for(int i=1;i<=numVertices;i++){
        if(r[i].to.size() == 2) ++ numJoin;
        if(r[i].to.size() == 0) ++ numLeaf;
        if(r[i].to.size() == 1 && r[i].Vertices.size() == r[r[i].to[0]].Vertices.size() + 1) ++ numIntro;
        if(r[i].to.size() == 1 && r[i].Vertices.size() == r[r[i].to[0]].Vertices.size() - 1) ++ numForget;
        sumBagsize += r[i].Vertices.size();
        sumDepth += r[i].dep;
    }
    
    int sumJoindis = 0;
    for(int i=1;i<=numVertices;i++){
        if(r[i].to.size() != 2)continue;
        for(int j=1;j<=numVertices;j++){
            if(r[j].to.size() != 2)continue;
            sumJoindis += dis(i, j);
        }
    }

    double BAF = 0, BCF = 0;
    for(int i=1;i<=numVertices;i++){
        int tbaf = 0, tbcf = 0;
        for(int x:r[i].Vertices){
            for(int y:r[i].Vertices){
                if(x==y)continue;
                tbaf += adj[x][y];
                tbcf += rec[x][y];
            }
        }
        BAF += 1.0 * tbaf / std::max(1.0 * r[i].Vertices.size() * (r[i].Vertices.size() - 1), 1.0);
        BCF += 1.0 * tbcf / std::max(1.0 * r[i].Vertices.size() * (r[i].Vertices.size() - 1), 1.0);
    }

    double BNCF = 0;
    for(int u=0;u<20;u++){
        double s1 = 0;
        for(int j=1;j<=numVertices;j++){
            int s2 = 0;
            for(int v:r[j].Vertices){
                s2 += adj[u][v];
            }
            s1 += 1.0 * s2 / r[j].Vertices.size();
        }
        BNCF += s1;
    }        

    mp["Average Bag Size"] = 1.0 * sumBagsize / numVertices;
    mp["Decomposition Overhead Ratio"] = 1.0 * sumBagsize / 20;
    mp["Average Depth"] = 1.0 * sumDepth / numVertices;
    mp["Join Percentage"] = 1.0 * numJoin / numVertices;
    mp["Forget Percentage"] = 1.0 * numForget / numVertices;
    mp["Introduce Percentage"] = 1.0 * numIntro / numVertices;
    mp["Leaf Percentage"] = 1.0 * numLeaf / numVertices;
    mp["Sum of Join node distances"] = sumJoindis;
    mp["Branching Factor"] = 1.0 * numVertices / (numVertices - numLeaf);
    mp["Bag Adjacency Factor"] = BAF / numVertices;
    mp["Bag Connectedness Factor"] = BCF / numVertices;
    mp["Bag Neighborhood Coverage Factor"] = BNCF / numVertices;


    for(auto p:mp)
        printf("%s:%lf\n", p.first.c_str(), p.second);

    return 0;
}
