#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
  	int maxRepeating(int arr[], int n, int k) {
	    // code here
	    for(int i=0;i<n;i++){
	        arr[arr[i]%k]+=k;
	    }
	    int max=arr[0]/k;
	    int index=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]/k>max){
	            max=arr[i]/k;
	            index=i;
	        }
	    }
	    return index;
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
        
       cout<<maxRepeating(a,n,k);
    
        
    }
	
	return 0;
}