#include <bits/stdc++.h>
#include <vector>
int main(void){
  std::vector<int> x(4);
  int maior=0; int indice=0;
  for(int i=0;i<4;i++){std::cin >> x[i];}
  for(int i=0;i<4;i++){if(x[i]>maior){indice=i;maior=x[i];}}
  x.erase(x.begin()+indice);
  std::cout << maior-x[2] << " " << maior-x[1] << " " << maior-x[0] << '\n';
}