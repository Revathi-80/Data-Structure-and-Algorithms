//When a function call itself untill a specified condition is met
//Base Condition : Its the condition to stop the recursion. So if it is not presented then it results to Stack Overflow.
//Print Names N times

#include<bits/stdc++.h>
using namespace std;
void func(int ind, int n){
	if(ind>n)
		return;
	cout<<"REVATHI"<<endl;
	func(ind+1,n);
}
int main(){
	int n;
	cin>>n;
	func(1,n);
return 0;
}


// Print linearly from 1 to N
#include<bits/stdc++.h>
using namespace std;
void func(int ind, int n){
	if(ind>n)
		return ;
	cout<<ind<<endl;
	func(ind+1,n);
}
int main(){
	int n;
	cin>>n;
	func(1,n);
return 0;
}

// Print linearly from N to 1
#include<bits/stdc++.h>
using namespace std;
void func(int ind, int n){
	if(ind==0)
		return ;
	cout<<ind<<endl;
	func(ind-1,n);
}
int main(){
	int n;
	cin>>n;
	func(n,n);
return 0;
}

// Print from  1 to N (backtracking)
#include<bits/stdc++.h>
using namespace std;
void func(int ind, int n){
	if(ind<1)
		return ;
	func(ind-1,n);
	cout<<ind<<endl;
}
int main(){
	int n;
	cin>>n;
	func(n,n);
return 0;
}

//Print from N  to 1 (backtracking)
#include<bits/stdc++.h>
using namespace std;
void func(int ind, int n){
	if(ind>n)
		return ;
	func(ind+1,n);
	cout<<ind<<endl;
}
int main(){
	int n;
	cin>>n;
	func(1,n);
return 0;
}


