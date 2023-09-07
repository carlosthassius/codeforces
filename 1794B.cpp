#include <vector>
#include <bits/stdc++.h>

void no_dividing(){
  int n; std::cin >> n;
  std::vector<int>number(n);
  for(int i=0;i<n;i++){
    std::cin >> number[i];
  }
  int conta_soma=0;
  for(int i=0;i<n;i++){ 
    if(number[i]==1){number[i]++;conta_soma++;}
  }
  for(int i=1;i<n;i++){
    if(number[i]%number[i-1]==0){number[i]++;conta_soma++;}
  }
  for(int i=0;i<n;i++){
    if(i==n-1){std::cout << number[i] << '\n';}
    else{std::cout << number[i] << ' ';}
  }
}
int main(void) {
  int t; std::cin >> t; while(t--){no_dividing();}
}
