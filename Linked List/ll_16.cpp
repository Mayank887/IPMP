#include <iostream>

using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void display(Node *head){
    Node *p=head;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node *p=head1;
    Node *q=head2;
    Node *head=new Node(0);
    Node *t=head;
    while(p!=NULL && q!=NULL){
        if(p->data==q->data){
            t->next=new Node(p->data);
            t=t->next;
            t->next=new Node(q->data);
            t=t->next;
            
            p=p->next;
            q=q->next;
        }
        else if(p->data<q->data){
            t->next=new Node(p->data);
            t=t->next;
            p=p->next;
        }
        else if(q->data<p->data){
            t->next=new Node(q->data);
            t=t->next;
            q=q->next;
        }
    
    }
    while(p!=NULL){
        t->next=new Node(p->data);
        t=t->next;
        p=p->next;
    }
    while(q!=NULL){
        t->next=new Node(q->data);
        t=t->next;
        q=q->next;
    }
    return head->next;
    
}  

int main()
{
    Node *head1=new Node(0);
    Node *head2=new Node(0);
    int n1,n2;
    cin>>n1>>n2;
    Node *temp=head1;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        temp->next=new Node(x);
        temp=temp->next;
    }
    temp=head2;
    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        temp->next=new Node(x);
        temp=temp->next;
    }
    head1=head1->next;
    head2=head2->next;
    display(head1);
    display(head2);
    Node *r=sortedMerge(head1,head2);
    display(r);

    return 0;
}