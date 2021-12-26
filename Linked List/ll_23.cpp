
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
long long  multiplyTwoLists (Node* l1, Node* l2)
{
        long long a=0;
        long long b=0;
        Node *p=l1;
        Node *q=l2;
        while(p!=NULL){
            a=(a*10+p->data)%1000000007;
            p=p->next;
        }
        while(q!=NULL){
            b=(b*10+q->data)%1000000007;
            q=q->next;
        }
        long long r=(a*b)%1000000007;
        return r;
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
   long long r=multiplyTwoLists(head1,head2);
    cout<<r;

    return 0;
}