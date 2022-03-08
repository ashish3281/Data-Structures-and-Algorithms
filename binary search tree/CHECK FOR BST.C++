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
bool isBST(node* root,node* min=NULL,node*max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;
    }
    bool leftvalid=isBST(root->left,min,root);
    bool rightvalid=isBST(root->right,root,max);
    return leftvalid and rightvalid;

}
int main(){
    node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
if(isBST(root1,NULL,NULL)){
    cout<<"valid bst"<<endl;
}
else{
    cout<<"invalid bst"<<endl;
}
    return 0;
}