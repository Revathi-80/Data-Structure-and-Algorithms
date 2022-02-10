//nados
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int sp=n/2,s=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=sp;j++)
    cout<<"\t";
    for(int j=1;j<=s;j++)
    cout<<"*\t";
    if(i<=n/2){
        sp--;
        s+=2;
    }
    else{
        sp++;
        s-=2;
    }
    
     cout<<endl;

}
   
}
