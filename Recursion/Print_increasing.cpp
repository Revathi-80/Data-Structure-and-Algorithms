//nados
#include<iostream>
using namespace std;

void printIncreasing(int n){
   if(n==1){
       cout<<"1"<<endl;
       return;
   }
   printIncreasing(n-1);
   cout<<n<<endl;
    
}


int main(){
    int n; cin>>n;
    printIncreasing(n);
}
