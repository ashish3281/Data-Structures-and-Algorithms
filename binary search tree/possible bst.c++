#include<iostream>
#include<vector>
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
vector<node*>consttrees(int start,int end){
    vector<node*>tree;
    if(start>end){
        tree.push_back(NULL);
    }
    for(int i=start;i<=end;i++){
        vector<node*>leftsubtree=consttrees(start,i-1);
        vector<node*>rightsubtree=consttrees(i+1,end);
        for(int j=0;j<leftsubtree.size();j++){
            node*left=leftsubtree[j];
        
         for(int k=0;k<rightsubtree.size();k++){
            node*right=rightsubtree[k];
            node*node=new node(i);
            node->left=left;
            node->right=right;
            tree.push_back(node);
         }
        }
    }
    return tree;
        
}
void preorder(node*root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    vector<node*>totaltree=consttrees(1,3);
    for(int i=0;i<totaltree.size();i++){
        cout<<(i+1)<<":";
        preorder(totaltree[i]);
        cout<<endl;
    }
    return 0;
}
