#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){cin >> a[i];}
    reverse(a.begin(),a.end());
    int aca=a[0],acb=0;
    for(int i=1;i<n;i++){acb+=a[i];}
    if((aca%2==0 && acb%2==0) || (aca%2!=0 && acb%2!=0)){
        cout << "YES" << '\n';
    }
    else{cout << "NO" << '\n';}
}
 
int main(){
    int t; cin >> t; while(t--){solve();}
    return 0;
}