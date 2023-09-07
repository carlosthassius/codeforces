#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    string s,s2="",sf=""; cin >> s;
    for(int i=0;i<s.size();i++){
        s2+=tolower(s[i]);
        if(s2[i]!='a' && s2[i]!='e' && s2[i]!='i' && s2[i]!='o' && s2[i]!='u' && s2[i]!='y'){
            sf+=".";
            sf+=s2[i];
        }
    }
    cout << sf << '\n';
}
 
int main(void){
    solve();
}