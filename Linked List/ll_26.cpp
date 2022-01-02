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
  void linkdelete(struct Node  *head, int M, int N)
    {
        Node *a=head;
        
        while(1){
        int c=1;   
        while(a!=NULL && c<M){
            a=a->next;
            c++;
            
        }
        Node *b=a;
        int c1=0;
        Node *n;
        if(a==NULL)
        break;
        b=a->next;
        while(b!=NULL && c1<N){
            n=b->next;
            free(b);
            b=n;
            c1++;
        }
        a->next=b;
        if(b==NULL)
        break;
             a=b;
        }
        
        
    }
int main()
{
    int a;
    cin>>a;
    Node *head=new Node(0);
    Node *t=head;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        t->next=new Node(x);
        t=t->next;
    }
    head=head->next;
    int m,n;
    cin>>m>>n;
    linkdelete(head,m,n);
    display(head);

    return 0;
}