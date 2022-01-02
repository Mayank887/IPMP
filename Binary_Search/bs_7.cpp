#include <iostream>
#include <vector>

using namespace std;

int fixedpt(int arr[],int n){
    int l=0;
    if(arr[0]>n-1)
    return -1;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==mid)
        return mid;
        else if(arr[mid]>mid)
        r=mid-1;
        else
        l=mid+1;
        
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
    int v[n];
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
   
    cout<<fixedpt(v,n)<<endl;
   }

    return 0;
}