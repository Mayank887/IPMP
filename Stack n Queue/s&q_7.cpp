#include <iostream>
#include <stack> 

using namespace std;

int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> s;
        
        int n=S.length();
        for(int i=0;i<n;i++){
            if(S[i]>=48 && S[i]<=57)
            s.push(S[i]-48);
            else{
                int t2=s.top();
                s.pop();
                int t1=s.top();
                s.pop();
                if(S[i]=='*')
                s.push(t1*t2);
                else if(S[i]=='/')
                s.push(t1/t2);
                else if(S[i]=='+')
                s.push(t1+t2);
                else if(S[i]=='-')
                s.push(t1-t2);
            }
            
        }
        return s.top();
    }


int main()
{
    string s="231*+9-";
    cout<<evaluatePostfix(s)<<endl;
    

    return 0;
}