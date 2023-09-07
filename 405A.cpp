#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> c(n);
    for(int i=0;i<n;i++){cin >> c[i];}
    sort(c.begin(),c.end());
    for(int i=0;i<n-1;i++){cout << c[i] << ' ';}
    cout << c[n-1] << '\n';
}
int main(void){
    solve();
}