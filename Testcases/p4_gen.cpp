#include <bits/stdc++.h>
#include "C:/Users/DARPAN/Documents/CP/debugger.h"
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void generate(){
    int MAXT = 1000000000;
    int MAXN = 200000;
    int t1 = uniform_int_distribution<int>(1, MAXT+1)(rng);
    int t2 = uniform_int_distribution<int>(1, MAXT+1)(rng);
    if(t1 > t2) swap(t1,t2);
    assert(t1 != t2 && t1 > 0);
    vector<int> arr;
    int n = uniform_int_distribution<int>(1,MAXN)(rng);
    n = MAXN;
    for(int i = 0; i < n; i++){
        arr.push_back(uniform_int_distribution<int>(1,MAXT)(rng));
    }
    assert(*min_element(arr.begin(),arr.end()) <= t1 &&
           *max_element(arr.begin(),arr.end()) >= t2);
    random_shuffle(arr.begin(),arr.end());
    cout << t1 << " " << t2 << "\n";
    cout << n << "\n";
    for(int i = 0; i < n; i++){
        if(i == n-1) cout << arr[i];
        else cout << arr[i] << " ";
    }
    cout << "\n";

    sort(arr.begin(),arr.end());
    int a1 = -1, a2 = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] <= t1) a1 = arr[i];
        if(arr[i] >= t2){
            a2 = arr[i];
            break;
        }
    }
    cout << "\n\n";
    cout << a2-a1+1 << "\n";
}

int main(){
    freopen("output.txt","w",stdout);

    // vector<string> testcases(20);
    for(int i = 0; i < 1; i++){
        // generate(testcases,i);

        generate();

    }

    // for(auto e:testcases){
    //     cout << e << "\n";
    // }
    return 0;
}
