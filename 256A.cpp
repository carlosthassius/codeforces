#include <bits/stdc++.h>

using namespace std;

void solve(){
    int k,n,w; cin >> k >> n >> w;
    int ac=0;
    for(int i=1;i<=w;i++){
        ac+=i*k;
    }
    if(ac-n>=0){cout << ac-n << '\n';} 
    else{cout << 0 << '\n';}
}
int main(void){
    solve();
}