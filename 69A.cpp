#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n,fr=0; cin >> n;
    for(int i=0;i<n;i++){
        int x,y,z; cin >> x >> y >> z;
        fr+=z;
        if(n==1 && x+y+z!=0){cout << "NO" << '\n';exit(0);}
    }
    if(fr){cout << "NO" << '\n';}
    else{cout << "YES" << '\n';}
}
 
int main(void){
    solve();
}