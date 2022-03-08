#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    struct node*left;
    struct node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
node* inordersucc(node*root){
    node* curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}
node* deleteinBST(node *root,int key){
   
   if(key<root->data){
       root->left =deleteinBST(root->left,key);

   }
   else if(key>root->data){
       root->right=deleteinBST(root->right,key);
   }
   else{
       if(root->left==NULL){
           node* temp=root->right;
           free(root);
           return temp;
       }
       else if(root->right==NULL){
           node* temp=root->left;
           free(root);
           return temp;
       }
     //case 3  
       node* temp=inordersucc(root->right);
       root->data = temp->data;
       root->right=deleteinBST(root->right,temp->data);
   }
   return root;
}
void inorder(node* root){
 if(root==NULL){
     return ;
 }
 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
}
   
int main(){
    struct node*root=new node(4);
    root->left=new node(2);
    root->right=new node(5);
    root->left->left=new node(1);
    root->left->right=new node(3);
    root->right->left=new node(6);
    inorder(root);
    cout<<endl;
root=deleteinBST(root,5);
inorder(root);
cout<<endl;
    return 0;
}
    