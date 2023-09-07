#include <bits/stdc++.h>

int main(void) {
  std::string str; std::cin >> str;
  std::sort(str.begin(), str.end());
  int k = unique(str.begin(),str.end())-str.begin();
  if(k%2==0){
    std::cout << "CHAT WITH HER!\n";
  }else{
    std::cout << "IGNORE HIM!\n";
  }
}