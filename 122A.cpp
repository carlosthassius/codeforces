#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n; cin >> n;
    int sorte[14] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0;i<14;i++){
        if(n>=sorte[i] && n%sorte[i]==0){cout << "YES" << '\n'; exit(0);}
    }
    cout << "NO" << '\n';
}
int main(void){
    solve();
}