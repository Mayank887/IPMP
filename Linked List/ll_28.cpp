#include <iostream>

using namespace std;
struct Node {
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *a;
Node *b;

void display(Node *head){
    Node *p=head;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    
}

void mergeList(struct Node **p, struct Node **q)
{
     // Code here
     Node *a=*p;
     Node *b=*q;
     Node *t;
     Node *pa=NULL;
     Node *pb=NULL;
     while(a && b){
         pa=a;
         t=a->next;
         a->next=b;
         a=t;
         pb=b;
         t=b->next;
         b->next=a;
         b=t;
     }
    if(a==NULL && b==NULL)
    *q=NULL;
    else if(a==NULL)
    *q=b;
    else if(b==NULL){
    pb->next=a;
    *q=NULL;}
    
     
}

int main()
{
    int n,m;
    cin>>n;
    Node *head1=new Node(0);
    Node *t=head1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        t->next=new Node(x);
        t=t->next;
    }
    head1=head1->next;
     cin>>m;
    Node *head2=new Node(0);
    Node *t2=head2;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        t2->next=new Node(x);
        t2=t2->next;
    }
    head2=head2->next;
    
    mergeList(&head1,&head2);
    display(head1);
    display(head2);
    
    

    return 0;
}