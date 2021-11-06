#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> product(int arr[],int n){
    vector<int> left(n);
    vector<int> right(n);
    int p=1;
    for(int i=0;i<n;i++){
        left[i]=p;
        p=p*arr[i];
    }
    p=1;
    for(int i=n-1;i>=0;i--){
        right[i]=p;
        p=p*arr[i];
    }
    vector<int> result(n);
    for(int i=0;i<n;i++){
        result[i]=left[i]*right[i];
    }
    return result;
    
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
        
        vector<int> v=product(a,n);
        for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
        cout<<endl;
    
        
    }
	
	return 0;
}