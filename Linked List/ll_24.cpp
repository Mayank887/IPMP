#include <iostream>
#include <set>

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
Node *swap(Node *head){
    Node *c=head;
    Node *p=NULL;
    Node *n=NULL;
    int count=0;
    while(c!=NULL && count<2){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
        count++;
        
        
    }
    if(n!=NULL){
    head->next=swap(n);}
    return p;
}   
    
int main()
{
    Node *head1=new Node(0);
    
    int n;
    cin>>n;
    Node *temp=head1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        temp->next=new Node(x);
        temp=temp->next;
    }
    
    head1=head1->next;
    display(head1);
    head1=swap(head1);
    display(head1);

    return 0;
}