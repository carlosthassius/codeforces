#include <bits/stdc++.h>
 
void matrix(){
  int contador=0;
  for(int i=0;i<8;i++){
    std::string strp;
    std::cin >> strp;
    if(strp=="RRRRRRRR"){
      contador++;
    }
  }
  if(contador>0){std::cout<<"R"<<'\n';}
  else{std::cout<<"B"<<'\n';}
}
int main(void) {
  int t; std::cin >> t; while(t--){matrix();}
}