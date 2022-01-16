#include <iostream>
#include <stack> 

using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
class Stack{
    private:
    Node *head;
    Node *middle;
    int size;
    public:
    Stack(){
        head=NULL;
        middle=NULL;
       
        size=0;
    }
    
    void push(int x ){
        Node *nn=new Node(x);
        if(head==NULL){
            head=nn;
            middle=nn;
            size++;
        }
        else{
        nn->next=head;
        head->prev=nn;
        head=nn;
        size++;
        if(head->next==NULL)
        middle=head;
        else{
            if(size%2!=0)
            middle=middle->prev;
        }
        
        }
    }
    void pop(){
        if(head==NULL)
        return;
        head=head->next;
        size--;
        if(size%2==0)
        middle=middle->next;
        
    }
    int getMiddle(){
        if(middle==NULL)
        return -1;
        else
        return middle->data;
    }
    void deleteMiddle(){
        if(middle==NULL)
        return ;
        
        Node *t=middle;
        middle->next->prev=middle->prev;
        middle->prev->next=middle->next;
        free(t);
        
    }
    void display(){
        Node *p=head;
        while(p!=NULL){
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<endl;
    }
    
    
};

int main()
{
    Stack s;
    s.push(1);
    cout<<s.getMiddle()<<endl;
    s.push(2);
    cout<<s.getMiddle()<<endl;
    s.push(3);
    cout<<s.getMiddle()<<endl;
    s.push(4);
    cout<<s.getMiddle()<<endl;
    s.push(5);
    cout<<s.getMiddle()<<endl;
    s.pop();
     cout<<s.getMiddle()<<endl;
    s.pop();
     cout<<s.getMiddle()<<endl;
     s.display();
     s.deleteMiddle();
     s.display();

    return 0;
}
