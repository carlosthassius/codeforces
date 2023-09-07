#include <iostream>
 
using namespace std;
 
int main(void) {
  int n;
  cin >> n;
  if (n==1){
    cout << "I hate it" << endl;
  }
  else if (n==2){
    cout << "I hate that I love it" << endl;
  }
  else if (n%2==0){
    for(int i=1;i<=(n/2);i++){
      if(i==(n/2)){
        cout << "I hate that I love it";
      }  else{
        cout << "I hate that I love that ";
      }
    }
  }
  else if (n%2!=0){
    for(int i=1;i<=(n+1)/2;i++){
      if(i==((n+1)/2)){
        cout << "I hate it";
      }  else{
        cout << "I hate that I love that ";
      }
    }
  }
}