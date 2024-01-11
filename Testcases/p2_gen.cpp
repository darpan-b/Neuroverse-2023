#include <bits/stdc++.h>
#include "C:/Users/DARPAN/Documents/CP/debugger.h"
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void generate(){
    int maxvalue = (int)1000000000;
    int n1 = rng()%maxvalue;
    int n2 = rng()%maxvalue;
    if(n1 > n2){
        swap(n1,n2);
    }
    cout << n1 << " " << n2 << "\n";
    cout << n2-n1 << "\n";
    cout << "\n";
}

int main(){
    freopen("output.txt","w",stdout);

    // vector<string> testcases(20);
    for(int i = 0; i < 20; i++){
        // generate(testcases,i);

        generate();

    }

    // for(auto e:testcases){
    //     cout << e << "\n";
    // }
    return 0;
}
