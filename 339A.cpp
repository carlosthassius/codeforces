#include <bits/stdc++.h>

using namespace std;

void solve(){
    string a; cin >> a;
    sort(a.begin(),a.end());
    int ta=a.size()/2;
    for(int i=ta; i<a.size();i++){
        if(i+1==a.size()){
            cout << a[i] << '\n';
        }
        else{cout << a[i] << "+";}
    }
}
int main(void){
    solve();
}