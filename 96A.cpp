#include <iostream>

using namespace std;
int main() {
  string players; cin >> players;
  int conta_zero=0, conta_um=0;
  for(int i=0; i<players.size(); i++){
    if(players[i]=='0'){
      if(conta_zero==0){conta_zero++;conta_um=0;}
      else{conta_zero++;}
    }
    else{
      if(conta_um==0){conta_um++;conta_zero=0;}
      else{conta_um++;}
    }
    if(conta_zero==7 || conta_um==7){
      cout << "YES" << '\n'; exit(0);;
    }
  }
  cout << "NO" << '\n';
}