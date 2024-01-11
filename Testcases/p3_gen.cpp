#include <bits/stdc++.h>
#include "C:/Users/DARPAN/Documents/CP/debugger.h"
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void generate(){
    int MAXVALUE = 100;
    int MAXS = 1;

    int n = MAXVALUE;
    if(n == 0) n = MAXVALUE;
    int s = MAXS;
    if(s == 0) s = MAXS;

    cout << n << " " << s << endl;

    int ans = 0;

    vector<int> arr;
    while((int)arr.size() < n){
        // int here_ans = rng()%(n-(int)arr.size());
        // int num = rng()%s;
        // if(num == 0)num++;
        // int other = s-num;
        // arr.push_back(num);
        // for(int i = 0; i < here_ans; i++){
        //     arr.push_back(other);
        // }
        // ans += here_ans;

        arr.push_back(12345);
    }
    while((int)arr.size() < n){
        arr.push_back(rng()%MAXS);
    }
    random_shuffle(arr.begin(),arr.end());
    for(int i = 0; i < n; i++){
        if(i == n - 1) cout << arr[i];
        else cout << arr[i] << " ";
    }
    // for(auto e:arr) cout << e << " ";
    cout << "\n\n";
    cout << ans << "\n\n\n";
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
