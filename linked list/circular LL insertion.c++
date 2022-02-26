#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insert_at_head(node* &head,int val)
{
    node*n=new node(val);
    
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void insert_at_tail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL)
    {
        insert_at_head(head,val);
        return;
    }
    
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void display(node*head){
    node*temp=head;
    do{
         cout<< temp->data<<"->";
        temp=temp->next;
    }
    while(temp!=head);
      cout<<"null"<<endl;
    
    
}
int main()
{
    node*head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);

    display(head);
    insert_at_head(head,5);
    display(head);
    return 0;
}
