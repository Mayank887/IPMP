
#include <iostream>
#include <stack>


using namespace std;

bool ispar(string x)
    {
        // Your code here
        int n=x.size();
        stack<char> s;
        for(int i=0;i<n;i++){
            if(x[i]=='{' || x[i]=='(' || x[i]=='[')
            s.push(x[i]);
            else if( x[i]=='}'){
                if(!s.empty() && s.top()=='{')
                s.pop();
                else
                return false;
            }
            else if(x[i]==')'){
                if(!s.empty() && s.top()=='(')
                s.pop();
                else
                return false;
            }
            else if(x[i]==']'){
                if(!s.empty() && s.top()=='[')
                s.pop();
                else
                return false;
            }
            else return false;
            
            
        }
        if(s.empty())
        return true;
        else
        return false;
    }




int main()
{
    int t;
    cin>>t;
    while(t--){
        string s="";
        cin>>s;
        int n=s.size();
        if(ispar(s))
        cout<<"balanced"<<endl;
        else
        cout<<"unbalanced"<<endl;
        
    
    
    }

    return 0;
}
