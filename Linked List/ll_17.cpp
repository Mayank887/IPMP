
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
Node* segregate(Node *head) {
        int c0=0;
        int c1=0;
        int c2=0;
        Node *p=head;
        while(p){
            if(p->data==0)
            c0++;
            else if(p->data==1)
            c1++;
            else
            c2++;
            p=p->next;
        }
        p=head;
        for(int i=0;i<c0;i++){
            p->data=0;
            p=p->next;
        }
        for(int i=0;i<c1;i++){
            p->data=1;
            p=p->next;
        }
        for(int i=0;i<c2;i++){
            p->data=2;
            p=p->next;
        }
        return head;
    }

int main()
{
    Node *head=new Node(0);
    int n;
    cin>>n;
    Node *temp=head;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        temp->next=new Node(x);
        temp=temp->next;
    }
    head=head->next;
    display(head);
    head=segregate(head);
    display(head);

    return 0;
}