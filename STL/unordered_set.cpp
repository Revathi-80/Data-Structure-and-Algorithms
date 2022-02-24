#include<bits/stdc++.h>
using namespace std;
void print (unordered_set<string>&s){
for(string value: s){
	cout<<value<<endl;
}
for(auto it=s.begin();it!=s.end();it++){
	cout<<(*it)<<endl;
}
}

int main() {
	unordered_set<string>s;
	s.insert("abc");
s.insert("abc"); //O(1)
	s.insert("zsdf");
	s.insert("bcd");
	s.insert("abc"); // use to store unique elements
	auto it= s.find("abc"); //O(1) access return iterator

if(it!=s.end()){
	cout<<(*it);
	s.erase(it);
}
s.erase("abc");
	print(s); 

}
/*
Given N stirngs and Q queries , 
it each query you are given a string print yes if string
is present else print no
N,=10^6
|S|<=100
Q<=10^6
*/
//hash table is used for the implementation of unordered set 
// therefore complex types are not used in unordered set like
//unordered_set<set<int>>, unoredered_set<pair<int,int>>	
// because hash function is complex	

void question() {
	unordered_set<string>s;
int n;
cin>>n;
for (int i = 0; i < n; ++i)
{
	string str;
	cin>>str;
	s.insert(str);
}
int q;
cin>>q;
while(q--){
	string str;
	cin>>str;
	if(s.find(str)==s.end()){
		cout<<"no";
	}
	else {
		cout<<"yes\n";
	}
}

}
