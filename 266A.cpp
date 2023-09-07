#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cont=0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            cont++;
        }
    }
    cout << cont << '\n';
}
int main(void){
    solve();
}