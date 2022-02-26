#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insert_at_tail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void delete_at_head(node*&head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node*todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int pos){
    
    if(pos==1)
    {
        delete_at_head(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count !=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
    
}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
       cout<< temp->data<<"->";
        temp=temp->next;
    }
    cout<<"null"<<endl;
}

int main()
{
    node*head=NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    //display(head);
    deletion(head,3);
    display(head);
    //delete_at_head(head);
    //display(head);
    return 0;
}