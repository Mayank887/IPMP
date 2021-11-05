#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
    vector<int> nextPermutation(int arr[], int n) {
        // code here
        
        vector<int> v;
        int index=n;
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                index=i;
                break;
            }
        }
        if(index==n){
            sort(arr,arr+n);
            for(int i=0;i<n;i++)
            v.push_back(arr[i]);
            return v;
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]>arr[index]){
                int temp=arr[i];
                arr[i]=arr[index];
                arr[index]=temp;
                sort(arr+index+1,arr+n);
                for(int i=0;i<n;i++)
                v.push_back(arr[i]);
                return v;
            
                
            }
        }
        
        
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
        
        vector<int> v=nextPermutation(a,n);
        for(int i:v)
        cout<<i<<" ";
        cout<<endl;
        
        
    }
	
	return 0;
}