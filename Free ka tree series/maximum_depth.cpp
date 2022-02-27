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

int max_depth(Node* root){
	if(root==NULL)
		return 0;
	int lh=max_depth(root->left);
	int rh=max_depth(root->right);
	return 1+max(lh,rh);
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
	root->right->right->left->right=new Node(10);
    cout<<max_depth(root);
return 0;
}
