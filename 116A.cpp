
#include <iostream>
using namespace std;
int main(void) {
  int n;
  cin >> n;
  int qtde_max=0;
  int passageiros=0;
  for(int i=0;i<n;i++){
    int s,e;
    cin >> s >> e;
    passageiros=passageiros-s+e;
    if(passageiros>qtde_max){
      qtde_max=passageiros;
    }
  }
  cout << qtde_max << endl;
}