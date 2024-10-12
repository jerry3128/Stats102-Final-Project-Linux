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

int totunits = 0;

class MyException : public std::runtime_error {
public:
    MyException(const std::string& message)
        : std::runtime_error(message) {}
};

enum Color {None, Red, Green, Blue};
std :: string getColorName(Color color){
	switch(color) {
        case Red: return "Red";
        case Green: return "Green";
        case Blue: return "Blue";
        default: return "None";
    }
}

struct Edge{int u,v;};


namespace Graph{
	int numVertices;
	std::vector<Edge> Edges;
	std::vector<int> Vertices;
	std::unordered_map<int,int> mp;
	std::vector<Color> vertexColor;

	void init(){numVertices = 0, Edges.clear(), vertexColor.clear(), mp.clear();}
	void del_node(int u){
		static std::vector<Edge> vectorEdges;
		static std::vector<int> vectorVertices;
		static std::vector<Color> vectorvertexColor;
		
		vectorEdges.clear();
		vectorVertices.clear();
		vectorvertexColor.clear();
		mp.erase(u);

		for(auto edge:Edges)
			if(edge.u != u && edge.v != u)
				vectorEdges.push_back(edge), ++totunits;
		
		int len = Vertices.size();
		for(int i=0;i<len;i++){
			if(Vertices[i] == u)continue;
			vectorVertices.push_back(Vertices[i]), ++totunits;
			vectorvertexColor.push_back(vertexColor[i]), ++totunits;
		}

		swap(vectorEdges, Edges);
		swap(vectorvertexColor, vertexColor);
		swap(vectorVertices, Vertices);

		numVertices -= 1;
		++ totunits;
	}
	void shift(int p){
		++ totunits;
		if(p == -1)return void();
		if(vertexColor[p] == None)return vertexColor[p] = Red, void();
		if(vertexColor[p] == Red)return vertexColor[p] = Green, void();
		if(vertexColor[p] == Green)return vertexColor[p] = Blue, void();
		if(vertexColor[p] == Blue)return vertexColor[p] = Red, shift(p-1);
	}
	bool Check(){
		std::unordered_map<int, Color> Vcolor;
		for(int i=0;i<numVertices;i++)
			Vcolor[Vertices[i]] = vertexColor[i], ++ totunits;
		
		for(auto edge: Edges){
			++ totunits;
			if(Vcolor[edge.u] == Vcolor[edge.v])
				return false;
		}
		return true;
	}
	bool add_node(int u, std::vector<Edge> &vectorEdges){
		Vertices.push_back(u), ++totunits;
		vertexColor.push_back(None), ++totunits;
		mp[u] = 1, ++totunits;
		for(auto E:vectorEdges)
			Edges.push_back(E), ++totunits;

		int tot = 0, lim = 1;
		numVertices += 1, ++totunits;
		shift(numVertices - 1), ++totunits;
		for(int i=1;i<=numVertices;i++)lim *= 3, ++totunits;
		while(!Check() && ++tot <= lim)shift(numVertices - 1), ++totunits;
		
		return tot <= lim;
	}
}

bool startsWith(const std::string& fullString, const std::string& starting) {
    if (fullString.length() >= starting.length()) {
        return (0 == fullString.compare(0, starting.length(), starting));
    } else {
        return false;
    }
}

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

struct DecompositionNode{
	int dep;
	std::vector<int> Vertices;
	DecompositionNode(int _dep, std::vector<int> _vec){dep = _dep, Vertices = _vec, totunits += Vertices.size();}
};

bool ans = 1;
void Shift(DecompositionNode A, DecompositionNode B, std::vector<Edge> Edges){
	std::unordered_map<int, int> mpB, mpA;
	for(int vertex: B.Vertices)mpB[vertex] = 1, ++ totunits;
	for(int vertex: A.Vertices)mpA[vertex] = 1, ++ totunits;

	for(int vertex: A.Vertices)
		if(!mpB.count(vertex))
			Graph::del_node(vertex), ++ totunits;

	for(int vertex: B.Vertices){
		++ totunits;
		if(!mpA.count(vertex)){
			std::vector<Edge> curEdges;
			++ totunits;
			for(auto edge: Edges){
				totunits += 2;
				if(edge.u == vertex && Graph::mp.count(edge.v))curEdges.push_back(edge);
				if(edge.v == vertex && Graph::mp.count(edge.u))curEdges.push_back(edge);
			}
			ans &= Graph::add_node(vertex, curEdges);
		}
	}
}

int main(int argc, char* argv[]){
	int StartTime = clock();
	
	std::ifstream Ginfile("/home/zs175/stats102-Final/data-generator/task4/graph.gr");
	if(!Ginfile){
		throw MyException("Cannot open the File - Graph");
		exit(1);
	}

	std::string Gline;
	std::vector<Edge> Edges;

	while (std::getline(Ginfile, Gline)) {
		if(startsWith(Gline, "edge")){
			int u=0, v=0;
			sscanf(Gline.c_str(), "edge(%d,%d).", &u, &v);
			Edges.push_back({u, v}), totunits += 2;
		}
	}
	

	std::ifstream infile("/home/zs175/stats102-Final/data-generator/task4/graph.td");
	if(!infile){
		throw MyException("Cannot open the File - Tree decomposition");
		exit(1);
	}

	std::string line;
	std::stack<DecompositionNode> st;
	st.push(DecompositionNode(-1, {}));
	while (std::getline(infile, line)){
		int len = line.length(), tot=0;
		if(len == 0)break;
		for(int i=0; i<len; i++)
			if(!isdigit(line[i]))++ tot;
			else break;
		
		std::vector<int> vec = extract_numbers(line);
		DecompositionNode cur = DecompositionNode(tot, vec);
		while(st.top().dep >= cur.dep){
			DecompositionNode lst = st.top();
			st.pop(),Shift(lst, st.top(), Edges), ++ totunits;
		}
		Shift(st.top(), cur, Edges),st.push(cur);
	}
	
	int EndTime = clock();
	printf("%d-ms %d-units\n", EndTime-StartTime, totunits);
	puts(ans?"true":"false");
	
	return 0;
}
