#include <iostream>

int main(void) {
  int n,k; std::cin >> n >> k;
  while(k!=0){
    if(n%10==0){
      n/=10;
    }
    else{n--;}
    k--;
  }
  std::cout << n << '\n';
}