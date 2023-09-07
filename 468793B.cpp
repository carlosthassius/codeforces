#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t, n;
  
  cin >> t;
  for (int i = 0; i < t; i++){
    cin >> n;
    vector<int> val(4);
    cin >> val[1] >> val[2] >> val[3];
    if(val[n] != 0 and val[val[n]] != 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
    return 0;
}