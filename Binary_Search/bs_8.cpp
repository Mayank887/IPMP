
#include <iostream>


using namespace std;

int incdec(int arr[],int n){
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if( mid==n-1)
        return arr[mid];
        else if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid])
        return arr[mid];
        else if(arr[mid+1]>arr[mid])
        l=mid+1;
        else if(arr[mid+1]<arr[mid])
        r=mid-1;
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
   
    cout<<incdec(v,n)<<endl;
   }

    return 0;
}
