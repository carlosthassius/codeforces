#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    string s; cin >> s;
    int st=0;
    for(int i=0;i<s.size();i++){
        if(st==0 && s[i]=='h'){st++;}
        else if(st==1 && s[i]=='e'){st++;}
        else if(st==2 && s[i]=='l'){st++;}
        else if(st==3 && s[i]=='l'){st++;}
        else if(st==4 && s[i]=='o'){cout << "YES" << '\n';exit(0);}
    }
    cout << "NO" << '\n';
}
 
int main(void){
    solve();
}