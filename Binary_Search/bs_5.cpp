
#include <iostream>
#include <vector>

using namespace std;


	vector<int> printUnsorted(int arr[], int n) {
	    // code here
	     vector<int> v;
	    int s=-1;
    int e=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            s=i;
            break;
        }
    }
    if(s==-1){
        v.push_back(0);
        v.push_back(0);
        return v;
    }
    
    for(int i=n-1;i>0;i--){
        if(arr[i]<arr[i-1]){
            e=i;
            break;
        }
    }
    int max=arr[s];
    int min=arr[s];
    for(int i=s+1;i<=e;i++){
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    for(int i=0;i<s;i++){
        if(arr[i]>min){
        s=i;
        break;}
    }
    for(int i=n-1;i>e;i--){
        if(arr[i]<max){
            e=i;
            break;
        }
    }
   
    v.push_back(s);
    v.push_back(e);
	    return v;
	}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> r=printUnsorted(arr,n);
    for(int i=0;i<r.size();i++)
    cout<<r[i]<<" ";
    
    
    

    return 0;
}
