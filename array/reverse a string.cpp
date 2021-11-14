// METHOD 1( USING SWAP)
#include<bits/stdc++.h>
using namespace std;
void reversestr(string &str){
	int n=str.length();
	for(int i=0;i<n/2;i++){
		swap(str[i],str[n-i-1]);
	}
}
int main(){
string str;
cin>>str;
reversestr(str);
cout<<str;
return 0;
}

//METHOD 2(IN BUILD FUNCTION REVERSE)
#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
reverse(str.begin(),str.end());
cout<<str;
return 0;
}

//METHOD 3 (reverse the array)
#include<bits/stdc++.h>
using namespace std;
void reversestr(string &str){
	int n=str.length();
	for(int i=n-1;i>=0;i--)
      cout<<str[i];
}
int main(){
string str;
cin>>str;
reversestr(str);
return 0;
}

//we can also use a separate arr/vector to store the reverse array and we can also use constructor
