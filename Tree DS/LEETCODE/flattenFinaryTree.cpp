//https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

class Solution {
public:
    void store(TreeNode* root, stack<TreeNode*> &ans){
        if(root==NULL){
            return ;
        }
        ans.push(root);
        store(root->left,ans);
        store(root->right,ans);
    }
    void flatten(TreeNode* root) {
        stack<TreeNode*> ans;
        store(root,ans);
        TreeNode* curr=NULL;
        while(!ans.empty()){
            if(curr==NULL){
                curr=ans.top();
            }
            else{
                ans.top()->right=curr;
                curr=ans.top();
            }
            curr->left=NULL;
            ans.pop();
        }
        root=curr;
    }
};