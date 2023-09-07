#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  bool achou_umb = false, achou_zerob = false;
  int achou_um, achou_zero;
  cin >> n;
  vector<int> val(n);
  for (int i = 0; i < n;i++){
    cin >> val[i];
  }
  for (int i = n - 1; i >= 0; i--){
    if (achou_umb && achou_zerob){
      break;
    }
    if (val[i]==1){
      achou_um = i;
      achou_umb = true;
    }
    else{
      achou_zero = i;
      achou_zerob = true;
    }
  }
  if(n-achou_um>n-achou_zero){
    cout << achou_um + 1 << '\n';
  }
  else{
    cout << achou_zero + 1 << '\n';
  }
  return 0;
}