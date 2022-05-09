//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

class Solution {
public:
    bool findPath(TreeNode* root,vector<TreeNode*> &path, TreeNode* n){
        if(root==NULL){
            return false;
        }
        path.push_back(root);
        if(root==n){
            path.push_back(root);
            return true;
        }
        if(findPath(root->left,path,n) || findPath(root->right,path,n)){
            return true;
        }
        else{
            path.pop_back();  
        }
        return false;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> path1;
        vector<TreeNode*> path2;
        
        if(findPath(root,path1,p)==false || findPath(root,path2,q)==false){
            return NULL;
        }
        for(int i=0;i<path1.size()-1 && i<path2.size()-1; i++){
            if(path1[i+1]!=path2[i+1]){
                return path1[i];
            }
        }
        return NULL;
    }
};