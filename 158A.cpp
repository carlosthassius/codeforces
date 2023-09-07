#include <bits/stdc++.h>
#include <vector>

int main(void) {
  int n,k; 
  std::cin >> n >> k;
  std::vector<int> points(n);
  for(int i=0;i<n;i++){
    std::cin >> points[i];
  }
  int aprovados=k;
  int referencia=points[k-1];
  if(referencia==0){referencia++;}
  for(int i=0;i<n;i++){
    if(i<=k-1 && points[i]==0){
      aprovados--;
    }
    if(i>=k && points[i]>=referencia){
      aprovados++;
    }
  }
  std::cout << aprovados << '\n';
}