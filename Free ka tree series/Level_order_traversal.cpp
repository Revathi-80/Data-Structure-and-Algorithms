class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int>>ans; // that will store the level wise order of the tree
           if(root==NULL)
               return ans;
        queue<TreeNode*>q;
        q.push(root);  // initially pushing the root into the queue
        while(!q.empty()){
            int size=q.size(); 
            vector<int>level; 
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();   //pop the first value 
                if(node->left!=NULL)  // if node's left exist push it into the queue
                    q.push(node->left);
                if(node->right!=NULL) //if node's right exist push it into the queue
                    q.push(node->right);
                level.push_back(node->val); // push the node's val into the vector 
            }
            ans.push_back(level); //push the level wise vector into the ans
        }
        return ans;
    }
};
