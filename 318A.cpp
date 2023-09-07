
#include <bits/stdc++.h>
 
using namespace std;
 
int main(void){
    long long n,k; cin >> n >> k;
    if(n%2==0){
        if(k<=n/2){ //impares
            cout << 1+2*(k-1) << '\n';
        }
        else{ //pares
            k-=n/2;
            cout << 2+2*(k-1) << '\n';
        }
    }
    else{
        if(k<=n/2+1){ //impares
            cout << 1+2*(k-1) << '\n';
        }
        else{
            k-=n/2+1;
            cout << 2+2*(k-1) << '\n';
        }
    }
}