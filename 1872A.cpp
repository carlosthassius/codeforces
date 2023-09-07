#include <bits/stdc++.h>
    
using namespace std;
    
void solve(){
    int a,b,c,mov=0; cin >> a >> b >> c;
    if(a>b){
        while(a>b){
            a-=c; b+=c; mov++;
        }
    }
    else{
        while(b>a){
            b-=c; a+=c; mov++;
        }
    }
    cout << mov << '\n';
    
}
int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t; while(t--){solve();}
}