
#include <iostream>
#include <stack> 

using namespace std;
class StackQueue{
private:   
    
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; 


void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
}


int StackQueue :: pop()
{
        // Your Code    
        if(s1.empty())
        return -1;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int a=s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return a;
}

int main()
{
    StackQueue s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    

    return 0;
}
