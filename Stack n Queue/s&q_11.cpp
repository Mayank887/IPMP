
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> rightsmaller(int arr[],int n){
    vector<int> v(n);
    stack<pair<int,int>> s;
     for(int i=n-1;i>=0;i--){
            if(s.empty())
            v[i]=n;
            else if(s.top().first<arr[i])
            v[i]=s.top().second;
            else{
                while(!s.empty() && s.top().first>=arr[i]){
                    s.pop();
                }
                if(s.empty())
                v[i]=n;
                else
                v[i]=s.top().second;
                
            }
            s.push({arr[i],i});
            
            
        }
        return v;
}
vector<int> leftsmaller(int arr[],int n){
    vector<int> v(n);
    stack<pair<int,int>> s;
     for(int i=0;i<n;i++){
            if(s.empty())
            v[i]=-1;
            else if(s.top().first<arr[i])
            v[i]=s.top().second;
            else{
                while(!s.empty() && s.top().first>=arr[i]){
                    s.pop();
                }
                if(s.empty())
                v[i]=-1;
                else
                v[i]=s.top().second;
                
            }
            s.push({arr[i],i});
            
            
        }
        return v;
}
int maxarea(int arr[],int n){
    vector<int> l=leftsmaller(arr,n);
    vector<int> r=rightsmaller(arr,n);
    vector<int> area(n);
    for(int i=0;i<n;i++){
        area[i]=(r[i]-l[i]-1)*arr[i];
    }
    int max=area[0];
    for(int i=1;i<n;i++){
        if(area[i]>max)
        max=area[i];
    }
    
    return max;
}
void display(vector<int> v ,int n){
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    cout<<endl;
}




int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<maxarea(arr,n)<<endl;
    
    }

    return 0;
}
