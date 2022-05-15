#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
      int data;
      Node* left;
      Node* right;
   
   Node(int d){
      this->data=d;
      this->left=NULL;
      this->right=NULL;
   }
};

Node* buildTree(Node* root){

   int data;
   cin>>data;
   root= new Node(data); 

   if(data==-1){
      return NULL;
   }

   cout<<"Enter the data for left node : ";
   root -> left = buildTree(root->left);
   cout<<"Enter the data for right node : ";
   root -> right = buildTree(root->right);

   return root;
}
Node* getSuccessor(Node* curr){
   curr = curr->right;
   while(curr!=NULL && curr->left!=NULL){
      curr=curr->left;
   }
   return curr;
}

Node* deleteInBST(Node* root,Node* val){
   if(root==NULL){
      return root;
   }
   if(root->data>val->data){
      root->left=deleteInBST(root->left,val);
   }
   else if(root->data<val->data){
      root->right = deleteInBST(root->right,val);
   }
   else{
      if(root->left==NULL){
         Node* temp=root->right;
         delete root;
         return temp;
      }
      else if(root->right==NULL){
         Node* temp=root->left;
         delete root;
         return temp;
      }
      else{
         Node* succ= getSuccessor(root);
         root->data = succ ->data;
         root->right = deleteInBST(root->right,succ);
      }
   }
   return root;
}

void levelOrderTraversal(Node* root){
   queue<Node*> q;
   q.push(root);
   q.push(NULL);
   while(!q.empty()){
      Node* temp= q.front();
      q.pop();

      if(temp==NULL){
         cout<<"\n";
         if(!q.empty()){
            q.push(NULL);
         } 
      }
      else{
         cout<<temp->data<<" ";
         if(temp->left!=NULL){
            q.push(temp->left);
         }
         if(temp->right!=NULL){
            q.push(temp->right);
         }
      }
   }
}

int main(){
   Node* root=NULL;
   root = buildTree(root);

   //Printing the node
   int v;
   cin>>v;
   Node* val=new Node(v);
   Node* ans=deleteInBST(root,val);
   levelOrderTraversal(ans);
  return 0;
}

//15 5 3 -1 -1 -1 20 18 16 -1 -1 -1 80 -1 -1 