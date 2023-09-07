#include <iostream>
#include <cstring>
using namespace std;
int main() {
  char st1[101];
  char st2[101];
  cin >> st1;
  cin >> st2;
  bool p=false,s=false;
  for(int i=0;i<strlen(st1);i++){
    if(tolower(st1[i]) < tolower(st2[i])){
      s=true;break;
    }
    else if(tolower(st1[i]) > tolower(st2[i])){
      p=true;break;
    }
  }
  if(p==false && s==false){
    cout << 0 << '\n';
  }
  else if(p==true && s==false){
    cout << 1 << '\n';
  }
  else if(p==false && s==true){
    cout << -1 << '\n';
  }
  return 0;
}