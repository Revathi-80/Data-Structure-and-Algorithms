#include<bits/stdc++.h>
using namespace std;
void print (multiset<string>&s){
for(string value: s){
	cout<<value<<endl;
}
for(auto it=s.begin();it!=s.end();it++){
	cout<<(*it)<<endl;
}
}
int main(){
//it uses red black trees for implementation
//allowed insert multiple values i.e duplicates are allowed to store	
	multiset<string>s;
 s.insert("abc"); //O(log(n))
	s.insert("zsdf");
	s.insert("bcd");
	s.insert("abc"); 
	auto it= s.find("abc"); //O(log(n)) returns the iterator 
// of first value	 
if(it!=s.end()){
	s.erase(it);
}
s.erase("abc"); // deletes all the occurences of "abc"
	print(s); 
}
