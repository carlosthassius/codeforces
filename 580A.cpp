#include <bits/stdc++.h>
    
using namespace std;
    
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){cin >> v[i];}
    int len=1,mlen=1;
    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]){len++;}
        if(len>mlen){mlen=len;}
        if(v[i]<v[i-1]){len=1;}
    }
    cout << mlen << '\n';
}
int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    solve();
}