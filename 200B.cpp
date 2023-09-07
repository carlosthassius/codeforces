#include <iostream>
using namespace std;
int main() {
  float soma=0;
  int n;
  cin >> n;
  int vet[n];
  for(int i=0;i<n;i++){
    cin>>vet[i];
  }
  for(int i=0;i<n;i++){
    soma=soma+vet[i];
  }
  cout << soma/n << endl;
  return 0;
}