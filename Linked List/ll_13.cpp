
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
    cout<<endl;
}

node* rotate(node* head, int k)
    {
       node *p=head;
       while(p->next!=NULL)
       p=p->next;
       p->next=head;
       for(int i=0;i<k;i++)
       head=head->next;
       p=head;
       while(p->next!=head)
       p=p->next;
       p->next=NULL;
       return head;
       
    }

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        node *head=new node(0);
        node *t=head;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            t->next=new node(x);
            t=t->next;
        }
        int k;
        cin>>k;
        head=head->next;
        display(head);
        head=rotate(head,k);
        display(head);
        
        
        
        
    }

    return 0;
}