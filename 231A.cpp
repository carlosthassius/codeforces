#include <iostream>
 
using namespace std;
 
int main() {
  int n;
  int cont=0;
  cin >> n;
  for(int i=0;i<n;i++){
    bool prob1,prob2,prob3;
    cin >> prob1 >> prob2 >> prob3;
    if(prob1+prob2+prob3>=2){
      cont++;
    }
  }
  cout << cont << '\n';
  return 0;
}
