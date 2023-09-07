
#include <iostream>
#include <cstring>
 
using namespace std;
 
int main() {
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    char w[1000];
    cin >> w;
    int tamanho = strlen(w);
    if (tamanho>10){
      cout << w[0] << tamanho-2 << w[tamanho-1] << endl;
    }
    else{
      cout << w << endl;
    } 
  }
  return 0;
}