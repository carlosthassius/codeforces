#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main() {
  char st1[101];
  int c=0;
  char st2[101];
  cin >> st1;
  int u=0,l=0;
  for(int i=0;i<strlen(st1);i++){
    if('A'<=st1[i] && st1[i]<='Z'){u++;}
    else{l++;}
  }
  if(u>l){
    for(int i=0;i<=strlen(st1);i++){
      st2[i]=toupper(st1[i]);
    }
  }
  else{
    for(int i=0;i<=strlen(st1);i++){
      st2[i]=tolower(st1[i]);
    }
  }
  cout << st2 << endl;
  return 0;
}