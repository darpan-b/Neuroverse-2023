#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin >> str;
    int n = (int)str.size();
    cout << n << endl;
    // for(int i = 0; i < n; i++){
    //     if(str.substr(i,min(10,n-i)) == "neuroverse"){
    //         cout << "YES\n";
    //         cout << i << "\n";
    //         cout << "\n";
    //         return;
    //     }
    // }
    // cout << "NO\n\n";
}

int main(){
    freopen("output.txt","r",stdin);
    freopen("output2.txt","w",stdout);
    for(int i = 0; i < 20; i++){
        solve();
    }
    return 0;
}
