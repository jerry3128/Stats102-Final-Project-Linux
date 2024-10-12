#include <iostream>
#include <random>
#include <map>
#include <string>
#include <ctime>
#include <chrono>

int main(int argc, char* argv[]){

    std::random_device rd;
    unsigned long long seed = rd();
    std::mt19937 gen(seed);
    std::uniform_int_distribution<> dis(0, 20);
    

    int n = 20, m = 0;
	char* str = (char*)argv[1];
    sscanf(str, "%d", &m);
    //while( m >= 190 )m = dis(gen)*10 + dis(gen);

    puts("% Gen. Vers.    : 2.1.0");
    puts("% Graph Type    : random");
    puts("% Size          : 20");
    puts("% Th. TW        : null");
    puts("% Prob.         : 0.1");
    puts("% Output        : asp");
    puts("% Enhanced Graph: none");
    putchar('%');
	printf(" Seed          : %llu\n", seed);
    puts("");
    
    for(int i=0;i<20;i++)
        printf("vertex(%d).\n", i);
    
    std::map<int, std::map<int,int>> mp;
    for(int i=1;i<=m;i++){
        int u=dis(gen), v=dis(gen);
        while(u == v || mp[u].count(v))u=dis(gen), v=dis(gen);
        printf("edge(%d,%d).\n", u, v), mp[u][v] = 1, mp[v][u] = 1;
    }

    return 0;
}
