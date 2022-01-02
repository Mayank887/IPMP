#include <iostream>

using namespace std;
struct Node {
    int data;
    Node *next;
    Node *bottom;
    Node(int x){
        data=x;
        next=NULL;
        bottom=NULL;
    }
};
Node *a;
Node *b;

void display(Node *head){
    Node *p=head;
    while(p){
        cout<<p->data<<" ";
        p=p->bottom;
    }
    cout<<endl;
    
}

Node *merge(Node *head1,Node *head2){
    Node *a=head1;
    Node *b=head2;
    Node *head=new Node(0);
    Node *t=head;
    while(a!=NULL && b!=NULL){
        if(a->data==b->data){
            t->bottom=new Node(a->data);
            t=t->bottom;
            t->bottom=new Node(b->data);
            t=t->bottom;
            a=a->bottom;
            b=b->bottom;
        }
        else if(a->data<b->data){
            t->bottom=new Node(a->data);
            t=t->bottom;
            a=a->bottom;
        }
        else if(a->data>b->data){
            t->bottom=new Node(b->data);
            t=t->bottom;
            b=b->bottom;
        }
        
    }
    while(a!=NULL){
        t->bottom=new Node(a->data);
        a=a->bottom;
        t=t->bottom;
    }
     while(b!=NULL){
        t->bottom=new Node(b->data);
        b=b->bottom;
        t=t->bottom;
    }
    return head->bottom;
}    
Node *flatten(Node *root)
{
   if(root==NULL || root->next==NULL)
   return root;
   
   root->next=flatten(root->next);
   root=merge(root,root->next);
   return root;
}


int main()
{
    int n,m,z;
    cin>>n;
    Node *head1=new Node(0);
    Node *t=head1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        t->bottom=new Node(x);
        t=t->bottom;
    }
    head1=head1->bottom;
     cin>>m;
    Node *head2=new Node(0);
    Node *t2=head2;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        t2->bottom=new Node(x);
        t2=t2->bottom;
    }
    head2=head2->bottom;
     cin>>z;
    Node *head3=new Node(0);
    Node *t3=head3;
    for(int i=0;i<z;i++){
        int x;
        cin>>x;
        t3->bottom=new Node(x);
        t3=t3->bottom;
    }
    head3=head3->bottom;
    head1->next=head2;
    head2->next=head3;
    
    head1=flatten(head1);
    display(head1);
    
    

    return 0;
}