#include <iostream>
 
int main(void) {
  int n; std::cin >> n;
  int x=0;
  while(n--){
    std::string str; std::cin >> str;
    if(str[1]=='+'){x++;}
    else{x--;}
  }
  std::cout << x << '\n';
}