#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
void rearrange(int arr[], int n) {
	    // code here
	    int a[n];
	    int j=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            a[j]=arr[i];
	            j++;
	        }
	        
	    }
	    int k=j;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            a[j]=arr[i];
	            j++;}
	    }
	    int x=0;int y=k;
	    int i=0;
	    while(x<k && y<n){
	        arr[i]=a[x];
	        i++;
	        x++;
	        arr[i]=a[y];
	        i++;
	        y++;
	        
	    }
	    while(x<k){
	        arr[i]=a[x];
	        i++;
	        x++;
	    }
	    while(y<n){
	        arr[i]=a[y];
	        i++;
	        y++;
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
        
        rearrange(a,n);
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    
        
    }
	
	return 0;
}