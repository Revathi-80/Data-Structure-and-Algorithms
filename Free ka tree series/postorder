#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *left,*right;
	Node(int val){
		data=val;
		left=right=NULL;
	}
};
void postorder_dfs(Node *root,vector<int>&postorder){
	if(root==NULL)
		return;
	postorder_dfs(root->left,postorder);
	postorder_dfs(root->right,postorder);
	postorder.push_back(root->data);
}
int main(){
	struct Node *root= new Node(1);
	root->left=new Node(2);
	root->right= new Node(3);
	root->left->left= new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(7);
	root->right->right=new Node(8);
	root->left->right->left=new Node(6);
	root->right->right->left=new Node(9);
	root->right->right->right=new Node(10);
    vector<int>postorder;
 
   postorder_dfs(root,postorder);
   cout<<"postorder:";
   for(auto it: postorder)
   	cout<<it<<" ";
return 0;
}
