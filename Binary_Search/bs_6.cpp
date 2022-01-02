
#include <iostream>
#include <vector>

using namespace std;

int firstoccurence(int arr[],int l,int r,int key){
    while(l<=r){
        int m=(l+r)/2;
        if((arr[m]==key) && (m==0 || arr[m-1]<key))
        return m;
        else if(key>arr[m])
        l=m+1;
        else
        r=m-1;
    }
    return -1;
}
int lastoccurence(int arr[],int l,int r,int key){
    while(l<=r){
        int m=(l+r)/2;
        if((arr[m]==key) && (m==(r) || arr[m+1]>key))
        return m;
        else if(key<arr[m])
        r=m-1;
        else
        l=m+1;
    }
    return -1;
}
int occurence(int arr[],int n,int key){
    int f=firstoccurence(arr,0,n-1,key);
    int l=lastoccurence(arr,0,n-1,key);
    if(l==-1 || f==-1)
    return 0;
    else
    return l-f+1;
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
    long long target;
    cin>>target;
    cout<<occurence(v,n,target)<<endl;
   }

    return 0;
}
