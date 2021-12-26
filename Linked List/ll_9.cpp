
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

int intersectPoint(node* head1, node* head2)
{
    node *p=head1;
    node *q=head2;
    while(1){
        if(p==NULL || q==NULL)
        return -1;
        if(p==q)
        return p->data;
        else if(p<q)
        p=p->next;
        else
        q=q->next;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        
        node *head1=new node(1);
        node *n2=new node(5); 
        node *head2=new node(3);
        node *n3=new node(7);
        node *n4=new node(9);
        
         
        
        head1->next=n2;
        n2->next=n3;
        n3->next=n4;
        head2->next=n3;
       
        display(head1);
        cout<<endl;
        display(head2);
        cout<<endl;
        cout<<intersectPoint(head1,head2);
        
        
    }

    return 0;
}