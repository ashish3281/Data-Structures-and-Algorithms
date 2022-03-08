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
node* insertBST(node* root,int val){
      if(root==NULL){
          return new node(val);
      }
    if(val<root->data){
        root->left=insertBST(root->left,val);
    }
    else{
        //val>root->data
        root->right=insertBST(root->right,val);
    }
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    node *root=NULL;
    root=insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    //print inorder
    inorder(root);
    cout<<endl;
    return 0;
}
    