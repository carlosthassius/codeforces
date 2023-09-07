#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int a,b,c;
    vector<int> mv(4);
    cin >> a;
    cin >> b;
    cin >> c;
    mv.push_back((a+b)*c);
    mv.push_back(a*(b+c));
    mv.push_back(a*b*c);
    mv.push_back(a+b+c);
    sort(mv.begin(),mv.end());
    reverse(mv.begin(),mv.end());
    cout << mv[0] << '\n';
}
 
int main(void){
    solve();
}