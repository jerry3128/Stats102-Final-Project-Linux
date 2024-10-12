#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
int main(){
	string s1 = "dflat -p /home/zs175/stats102-Final/env_dflat/dflat/applications/graph_problems/3col/dynamic.lp --print-decomposition --depth 0";
        for(int j=1;j<=100;j++){
		for(int i=1;i<=2000;i++){
			string curf = "./data/data" + to_string(i) + "/data" + to_string(i) + ".gr";
			string curo = "./data/data" + to_string(i) + "/data" + to_string(i) + "_" + to_string(j) + ".td";
			string cmd = s1 + " < " + curf + " > " + curo;
			cout<<cmd<<"\n";
			system(cmd.c_str());
		}
		sleep(1);

	}
	return 0;
}
