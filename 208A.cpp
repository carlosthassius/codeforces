#include <bits/stdc++.h>
    
using namespace std;
    
void solve(){
    string s,sf=""; cin >> s;
    int i=0;
    while(i<s.size()){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;
            if(sf.size()>=1 && sf[sf.size()-1]!=' '){sf+=" ";}
        }
        else{sf+=s[i];}
        i++;
    }
    cout << sf << '\n';
}
int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    solve();
}