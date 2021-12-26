
#include <iostream>
#include <stack>

using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void display(node *head){
    node *p=head;
    while(p!=NULL){
    cout<<p->data<<" ";
    p=p->next;}
}
node* findIntersection(node* head1, node* head2)
{
    node *head=new node(0);
    node *temp=head;
    node *p=head1;
    node *q=head2;
    while(p!=NULL && q!=NULL){
        if(p->data==q->data){
            temp->next=new node(p->data);
            temp=temp->next;
            p=p->next;
            q=q->next;
        }
        else if(p->data<q->data)
        p=p->next;
        else
        q=q->next;
    }
    return head->next;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        
        node *head1=new node(1);
        node *n2=new node(5); 
        node *n3=new node(7);
        node *n4=new node(9);
        node *head2=new node(3);
         node *n22=new node(5); 
        node *n33=new node(8);
        node *n44=new node(9);
        
        head1->next=n2;
        n2->next=n3;
        n3->next=n4;
        head2->next=n22;
        n22->next=n33;
        n33->next=n44;
        display(head1);
        cout<<endl;
        display(head2);
        cout<<endl;
        node *r=findIntersection(head1,head2);
        display(r);
        
    }

    return 0;
}