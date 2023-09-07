#include <bits/stdc++.h>
    
using namespace std;
    
void solve(){
    int y; cin >> y;
    string s;
    while(true){
        set<int> val;
        y++;
        s=to_string(y);
        for(int i=0;i<4;i++){val.insert(s[i]);}
        if(val.size()==4){cout << y << '\n'; break;}
    }
}
int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    solve();
}