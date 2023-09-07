#include <bits/stdc++.h>
    
using namespace std;
    
void solve(){
    int s,n; cin >> s >> n;
    pair<int,int> p[1000];
    bool a=true;
    for(int i=0;i<n;i++){
        cin >> p[i].first >> p[i].second;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++){
        if(p[i].first>=s){a=false; break;}
        s+=p[i].second;
    }
    if(a){cout << "YES" << '\n';}
    else{cout << "NO" << '\n';}
}
int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    solve();
}