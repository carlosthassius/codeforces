#include <bits/stdc++.h>
 
void new_palindrome(){
  std::string str;
  std::cin >> str;
  int tamanho = str.size();
  str = str.substr(0,tamanho/2);
  int diferentes = unique(str.begin(), str.end()) - str.begin();
  std::cout << (diferentes==1 ? "NO" : "YES") << '\n';
}
 
int main() {
  int t; std::cin >> t; while(t--){new_palindrome();}
  return 0;
}