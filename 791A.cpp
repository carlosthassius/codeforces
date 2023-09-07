#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a,b,cont=0; cin >> a >> b;
    while(true){
        if(a>b){break;}
        a*=3;b*=2;cont++;
    }
    cout << cont << '\n';
}
int main(void){
    solve();
}