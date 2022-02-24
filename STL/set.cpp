// sets internal implementation is red black trees (self balancing trees
// having time complexity log(n))

#include<bits/stdc++.h>
using namespace std;
void print (set<string>&s){
for(string value: s){
	cout<<value<<endl;
}
for(auto it=s.begin();it!=s.end();it++){
	cout<<(*it)<<endl;
}
}
int main(){
	set<string>s;
	s.insert("abc"); //log(n)
	s.insert("zsdf");
	s.insert("bcd");
	s.insert("abc"); // use to store unique elements
	auto it= s.find("abc"); //log(n) access return iterator

if(it!=s.end()){
	cout<<(*it);
	s.erase(it);
}
	s.erase("abc");
	print(s); // sorted order
}

//Question
/*
Given N string,print unique strings in lexiographical order
N<=10^5 
|S|<=100000
*/
void question(){
 set<string>s;
int n;
cin>>n;
for (int i = 0; i < n; ++i)
{
	string str;
	cin>>str;
	s.insert(str);
}
for(auto value:s){
	cout<<value<<endl;
}
  
}
