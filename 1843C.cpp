#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    long long n;
    cin >> n;
    long long soma = 0;
    while (n >= 1){
        soma += n;
        if (n % 2 == 0){
            n /= 2;
        } else {
            n --;
            n /= 2;
        }
       
    }
    cout << soma << '\n';
}
 
int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; 
    cin >> t; 
    while (t--){
        solve();
    }
}