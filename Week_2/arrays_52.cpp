#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> leaders(int arr[],int n){
    vector<int> v;
    int max=arr[n-1];
    v.push_back(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max){
            v.push_back(arr[i]);
            max=arr[i];
        }
    }
    return v;
    
}
        
        
            
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        vector<int> v=leaders(a,n);
        for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
        cout<<endl;
    
        
    }
	
	return 0;
}