#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin >> s;
    for(int i=0; i<s.size();i++){
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cout << "YES" << '\n'; exit(0);
        }
    }
    cout << "NO" << '\n';
}
int main(void){
    solve();
}