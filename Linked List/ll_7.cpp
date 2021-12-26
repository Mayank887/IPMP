
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
void removeLoop(node* head)
    {
        node *s=head;
        node *f=head;
        int loop=0;
        while(s && f && f->next){
            s=s->next;
            f=f->next->next;
            if(s==f){
                loop=1;
                break;
            }}
            if(loop==1){
                s=head;
                while(s!=f){
                    s=s->next;
                    f=f->next;
                }
                while(f->next!=s){
                    f=f->next;
                }
                f->next=NULL;
            
        
        }
        
    }
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        node *head=new node(0);
        node *temp=head;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            node *nn=new node(x);
            temp->next=nn;
            temp=nn;
        }
        head=head->next;
        display(head);
        cout<<endl;
        removeLoop(head);
    }

    return 0;
}