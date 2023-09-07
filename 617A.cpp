#include <iostream>
 
using namespace std;
int main() {
  int p = 0;
  int n;
  cin >> n;
  while (n>1){
    if (n-5>=0){
      n = n-5;
      p++;
    }
    else if (n-4>=0){
      n = n-4;
      p++;
    }
    else if (n-3>=0){
      n = n-3;
      p++;
    }
    else if (n-2>=0){
      n = n-2;
      p++;
    }
  }
  if (n==1){
    n=n-1;
    p++;
  }
  cout << p << endl;
  return 0;
}