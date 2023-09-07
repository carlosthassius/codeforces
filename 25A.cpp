#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> c(n);
    for(int i=0;i<n;i++){cin >> c[i];}
    int p=0,im=0;
    for(int i=0;i<n;i++){if(c[i]%2==0){p++;}else{im++;}}
    if(p>im){
        for(int i=0; i<n; i++){if(c[i]%2){cout << i+1 << '\n'; exit(0);}}
    }
    else{
        for(int i=0; i<n; i++){if(!(c[i]%2)){cout << i+1 << '\n'; exit(0);}}
    }
}
int main(void){
    solve();
}