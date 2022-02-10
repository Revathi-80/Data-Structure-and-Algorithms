//nados
#include<iostream>
using namespace std;

int powerLogarithmic(int x,int n){
   if(n==0){
       return 1;
   }
   if(n==1){
       return x;
   }
   return x*x*powerLogarithmic(x,n-2);
}

int main(){
    int x,n; cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}
