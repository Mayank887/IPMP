
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
struct Node *reverse (struct Node *head, int k,int count1)
    { 
       
        if(count1%2==0){
        struct Node *c=head;
         Node *n=NULL;
            Node *p=NULL;
       
        int count =0;
        
        while(c!=NULL && count <k){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
            count++;
        }
             count1++;
        if(n!=NULL)
        head->next=reverse(n,k,count1);
        return p;
        }
        else{
            int count =0;
            Node *c=head;
            Node *n=NULL;
            for(int i=1;i<k && c->next!=NULL;i++){
                c=c->next;
            }
            n=c->next;
             count1++;
            if(n!=NULL)
            c->next=reverse(n,k,count1);
            return head;
            
        }
       
        
    }
    
Node *reversealternate(Node *head,int k){
    int count1=0;
    return reverse(head,k,count1);
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
    int k;cin>>k;
    head1=head1->next;
    display(head1);
    head1=reversealternate(head1,k);
    display(head1);

    return 0;
}