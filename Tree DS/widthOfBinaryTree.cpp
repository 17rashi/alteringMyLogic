//https://practice.geeksforgeeks.org/problems/maximum-width-of-tree/1/#

int getMaxWidth(Node* root) {
        int res=0;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            res=max(res,size);
            for(int i=0;i<size;i++){
                Node* curr=q.front();
                q.pop();
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
        }
        return res;
    }