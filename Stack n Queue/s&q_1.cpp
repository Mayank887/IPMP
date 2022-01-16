
#include <iostream>
#include <stack> 

using namespace std;

class twostack{
    private:
    int size;
    int *arr;
    int top1,top2;
    public:
    twostack(int n){
        size=n;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    
    void push1(int x){
        if(top1+1==top2)
        cout<<"Overflow"<<endl;
        else
        arr[++top1]=x;
    }
    void push2(int x){
        if(top2-1==top1)
        cout<<"Overflow"<<endl;
        else
        arr[--top2]=x;
    }
    int pop1()
{
    if(top1==-1)
    return -1;
    else
    return arr[top1--];

}
    int pop2()
{
    if(top2==size)
    return -1;
    else
    return arr[top2++];

}

};

int main()
{
    twostack s(6);
    s.push1(1);
    s.push1(2);
    s.push1(3);
    s.push2(4);
    s.push2(5);
    s.push2(6);
    s.push1(8);
    cout<<s.pop1()<<endl;
    cout<<s.pop2()<<endl;
    

    return 0;
}
