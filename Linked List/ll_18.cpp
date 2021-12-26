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
  Node* divide(int N, Node *head){
        Node *p=head;
        int rem=(head->data)%2;
        int c1=0;
        while(p!=NULL){
            if((p->data)%2!=rem){
                rem=(p->data)%2;
                c1=1;
                break;
            }
            p=p->next;
        }
        if(c1==0)
        return head;
        else{
            c1=0;
            while(p!=NULL){
                if((p->data)%2!=rem){
                    c1=1;
                    break;
                }
                p=p->next;
            }
            if(c1==0 && head->data%2==0)
            return head;
            else{
                Node *x=head;
        while(x!=NULL){
            if(x->data%2==0)
            break;
            x=x->next;
        }
        
        p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        Node *t=p;
        Node *c=head;
        Node *pv=NULL;
        Node *n=NULL;
        while(c!=p){
            n=c->next;
            if(c->data%2!=0){
                if(pv==NULL){
                    t->next=c;
                    t=c;
                    c->next=NULL;
                }
                else{
                    pv->next=n;
                    t->next=c;
                    t=c;
                    c->next=NULL;
                }
                
            }
            else
            pv=c;
            c=n;
        }
        if(c->data%2!=0){
            pv->next=c->next;
            t->next=c;
            c->next=NULL;
            
            
        }
        return x;
                
            }
            
        }
        
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
    head1=divide(n,head1);
    display(head1);

    return 0;
}