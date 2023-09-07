#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char st1[1001];
  char st2[1];
  cin >> st1;
  for(int i=0;i<strlen(st1);i++){
    if (i==0){
      st2[i]=toupper(st1[0]);
      cout << st2[i];
    }
    else if (i==strlen(st1)-1){
      cout << st1[i] << '\n';
    }
    else{
      cout << st1[i];
    }
  }
  return 0;
}