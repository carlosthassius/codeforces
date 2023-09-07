#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    string cd = "codeforces";
    string s; cin >> s;
    int cont=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=cd[i]){cont++;}
    }
    cout << cont << '\n';
}
 
int main(){
    int t; cin >> t; while(t--){solve();}
    return 0;
}