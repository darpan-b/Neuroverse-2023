#include <bits/stdc++.h>
#include "C:/Users/DARPAN/Documents/CP/debugger.h"
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void generate(vector<string>& tc, int cidx){
    int n = rng()%50;
    if(n == 0) n = 50;
    dbg(n);
    if(n < 10) n = 11;
    int has = rng()%2;
    // if(n < 10) has = 0;
    dbg(has);
    string res = "";
    int tosub = has?10:0;
    while(res.size() < n-tosub){
        res += (char)('a'+(rng()%26));
    }
    dbg(res);
    int idx = rng()%res.size();
    dbg(idx);
    if(has){
        res = res.substr(0,idx)+"neuroverse"+res.substr(idx);
    }
    dbg(res);
    tc[cidx] = res;
}

int main(){
    freopen("output.txt","w",stdout);

    vector<string> testcases(20);
    for(int i = 0; i < 20; i++){
        generate(testcases,i);
    }

    for(auto e:testcases){
        cout << e << "\n";
    }
    return 0;
}
