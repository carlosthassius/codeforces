#include <bits/stdc++.h>
 
void consultas(){
  long long n,q,matriz[300000],prefixos[300000];std::cin>>n>>q;
  for(int i=1;i<=n;i++){
    std::cin>>matriz[i];
    prefixos[i]=prefixos[i-1]+matriz[i];
  }
  for(int i=0;i<q;i++){
    int l,r,k; std::cin>>l>>r>>k;
    long long contador = prefixos[n]-(prefixos[r]-prefixos[l-1])+k*(r-l+1);
    if(contador%2==0){std::cout<<"NO"<<'\n';}
    else{std::cout<<"YES"<<'\n';}
  }
}
 
int main() {
  int t;std::cin>>t;while(t--){consultas();}
}