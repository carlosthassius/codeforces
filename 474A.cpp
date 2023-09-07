
#include <bits/stdc++.h>
 
using namespace std;
 
int main(void){
    string base = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string sentido; cin >> sentido;
    string entrada; cin >> entrada;
    string final = "";
    for(int i=0; i<entrada.size();i++){
        for(int j=0; j<base.size(); j++){
            if(base[j]==entrada[i]){
                if(sentido=="R"){
                    final+=base[j-1];
                }
                else{
                    final+=base[j+1];
                }
                break;
            }
        }
    }
    cout << final << '\n';
}