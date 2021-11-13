#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
  long long trappingWater(int arr[], int n){
        long long  water=0;
        long long left[n];
        long long right[n];
        int max=arr[0];
        for(int i=1;i<n;i++){
            left[i]=max;
            if(arr[i]>max)
            max=arr[i];
        }
        max=arr[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max;
            if(arr[i]>max)
            max=arr[i];
        }
        int min;
        
        
        for(int i=1;i<n-1;i++){
            min=left[i]<right[i]?left[i]:right[i];
            if((min-arr[i])>0)
            water+=min-arr[i];
        }
        // code here
        return water;
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
        
       cout<<trappingWater(a,n);
    
        
    }
	
	return 0;
}