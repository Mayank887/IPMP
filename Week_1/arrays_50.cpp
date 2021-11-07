#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int n=r-l+1;
        for(int j=0;j<k;j++){
        for(int i=0;i<n-1-j;i++){
            if(arr[i]<arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }}
        return arr[n-k];
    }
        
        
            
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
       cout<<kthSmallest(a,0,n-1,k);
    
        
    }
	
	return 0;
}