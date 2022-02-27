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

void preorder_dfs(Node *root,vector<int>&preorder){
	if(root==NULL)
		return;
	preorder.push_back(root->data);
	preorder_dfs(root->left,preorder);
	preorder_dfs(root->right,preorder);
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
    vector<int>preorder;
   
   preorder_dfs(root,preorder);
   cout<<"preorder:";
   for(auto x:preorder)
   	cout<<x<<" ";
   cout<<endl;
  
return 0;
}
