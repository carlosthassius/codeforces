#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    deque<int> valores(n);
    for (int i = 0; i < n; i++){
        cin >> valores[i];
    }
    sort(valores.begin(), valores.end());
    int soma=0;
    while (valores.size() > 1){
        soma += (valores.back() - valores.front());
        valores.pop_back();
        valores.pop_front();
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