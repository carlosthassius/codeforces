#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
void solve()
{
  int n, opr = 0; cin >> n;
  vector<int> V;
  ll sum = 0; 
 
  for(int i = 0; i < n; i++)
    {
      int a; cin >> a;
      if(a != 0){ V.push_back(a); }
      if(a < 0) sum += -a;
      else sum += a;
    }
 
  for(int i = 0; i < V.size(); i++)
    {
      if(V[i] < 0 and (V[i + 1] > 0 or i == V.size() - 1)) opr++;
    }
 
  cout << sum << " " << opr << '\n';
 
  
}
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    int T; cin >> T;
    while(T--)
    { solve(); }
    return 0;
}