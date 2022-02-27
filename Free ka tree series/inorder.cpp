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
void inorder_dfs(Node *root, vector<int>&inorder){
	if(root==NULL) 
		return;
	inorder_dfs(root->left,inorder);
	inorder.push_back(root->data);
	inorder_dfs(root->right,inorder);
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
    vector<int>inorder;
   inorder_dfs(root,inorder);
   cout<<"inorder:";
   for(auto it:inorder)
   	cout<<it<<" ";
   cout<<endl;
  
return 0;
}
