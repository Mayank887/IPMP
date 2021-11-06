#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
void maxmin(int arr[],int n){
    int max;
    int min;
    int index;
    if(n%2==0){
        max=(arr[0]>arr[1])?arr[0]:arr[1];
        min=(arr[0]<arr[1])?arr[0]:arr[1];
        index=2;
    }
    else{
        max=arr[0];
        min=arr[0];
        index=1;
    }
    while(index<n){
        if(arr[index]>arr[index+1]){
            if(arr[index]>max)
            max=arr[index];
            if(arr[index+1]<min)
            min=arr[index+1];
        }
        else{
            if(arr[index+1]>max)
            max=arr[index+1];
            if(arr[index]<min)
            min=arr[index];
        }
        index+=2;
    }
    cout<<max<<" "<<min;
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
        
        maxmin(a,n);
    
        
    }
	
	return 0;
}