#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    string alf = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<alf.size();i++){
        bool a;
        for(int j=0;j<n;j++){
            a=false;
            if(tolower(s[j])==alf[i]){a=true; break;}
        }
        if(!a){cout << "NO" << '\n'; exit(0);}
    }
    cout << "YES" << '\n';
}
int main(void){
    solve();
}