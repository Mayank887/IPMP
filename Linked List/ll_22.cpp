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
  Node *reverse(Node *head){
        Node *c=head;
        Node *p=NULL;
        Node *n=NULL;
        while(c!=NULL){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node *a=reverse(first);
        Node *b=reverse(second);
        Node *r=new Node(0);
        Node *t=r;
        int c=0;
        int s;
        while(a!=NULL && b!=NULL){
            s=a->data+b->data+c;
            c=s/10;
            t->next=new Node(s%10);
            t=t->next;
            a=a->next;
            b=b->next;
        }
        while(a!=NULL){
            s=a->data+c;
            c=s/10;
            t->next=new Node(s%10);
            t=t->next;
            a=a->next;
        }
         while(b!=NULL){
            s=b->data+c;
            c=s/10;
            t->next=new Node(s%10);
            t=t->next;
            b=b->next;
        }
        if(c==1){
            t->next=new Node(1);
        }
        return reverse(r->next);
        
        
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
    Node *r=addTwoLists(head1,head2);
    display(r);

    return 0;
}