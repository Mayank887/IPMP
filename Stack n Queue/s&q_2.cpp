#include <iostream>
#include <queue> 

using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};

void QueueStack :: push(int x)
{
        // Your Code 
        q1.push(x);
}


int QueueStack :: pop()
{
        // Your Code    
        if(q1.empty())
        return -1;
        else{
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            int a=q1.front();
            q1.pop();
            queue<int> q=q1;
            q1=q2;
            q2=q;
            return a;
        }
}


int main()
{
    QueueStack s;
    s.push(4);
    s.push(2);
    s.push(3);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    s.push(1);
    s.push(5);
    s.push(6);
    
    s.push(8);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    

    return 0;
}