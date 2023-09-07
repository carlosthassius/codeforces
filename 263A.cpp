#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int m[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){cin >> m[i][j];}
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(m[i][j]){
                cout << abs(i-3+1)+abs(j-3+1) << '\n';
            }
        }
    }
}
int main(void){
    solve();
}