#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    string s,sf=""; cin >> s;
    int cm=0;
    for(int i=1; i<s.size();i++){
        if(int(s[i])>=97){cm++;}
    }
    if(cm){cout << s << '\n';}
    else{
        for(int i=0;i<s.size();i++){
            if(int(s[i])>=97){sf+=s[i]-32;}
            else{sf+=s[i]+32;}
        }
        cout << sf << '\n';
    }
}
int main(void){
    solve();
}