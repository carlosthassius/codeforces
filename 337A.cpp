#include <bits/stdc++.h>
    
using namespace std;
    
void solve(){
    int n,m; cin >> n >> m;
    vector<int> v(m);
    for(int i=0;i<m;i++){cin >> v[i];}
    sort(v.begin(),v.end());
    int m_d=v[m-1]-v[0],i=0;
    while(i<=m-n){
        vector<int> arr;
        for(int j=i;j<m;j++){arr.push_back(v[j]);}
        if(arr[n-1]-arr[0]<m_d){m_d=arr[n-1]-arr[0];}
        i++;
    }
    cout << m_d << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    solve();
}