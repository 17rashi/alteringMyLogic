//https://leetcode.com/problems/binary-tree-right-side-view/

class Solution {
public:
    int maxLevel=0;
    void printRight(TreeNode* root,int level,vector<int> &ans){
        if(root==NULL){
            return ;
        }
        if(maxLevel<level){
            ans.push_back(root->val);
            maxLevel=level;
        }
        printRight(root->right,level+1,ans);
        printRight(root->left,level+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        printRight(root,1,ans);
        return ans;
    }
};