#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int a=0,d=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){a++;}
        else{d++;}
    }
    if(d>a){cout << "Danik" << '\n';}
    else if(a>d){cout << "Anton" << '\n';}
    else{cout << "Friendship" << '\n';}
}
int main(void){
    solve();
}