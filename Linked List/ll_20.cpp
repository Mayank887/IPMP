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
void alternatingSplitList(struct Node* head) 
{
    //Your code here
    a=head;
    b=head->next;
    Node *t1=a;
    
    Node *t2=b;
    while(t2!=NULL && t2->next!=NULL){
        t1->next=t2->next;
        t1=t2->next;
        t2->next=t1->next;
        t2=t2->next;
    }
    if(t1)
    t1->next=NULL;
    if(t2)
    t2->next=NULL;
}
void display(Node *head){
    Node *p=head;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    
}

int main()
{
    int n;
    cin>>n;
    Node *head=new Node(0);
    Node *t=head;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        t->next=new Node(x);
        t=t->next;
    }
    head=head->next;
    alternatingSplitList(head);
    display(a);
    display(b);
    
    

    return 0;
}