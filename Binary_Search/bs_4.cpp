
#include <iostream>
#include <vector>

using namespace std;
    int findFloor(vector<long long> v, long long n, long long x){
     
        if(x>=v[n-1])
        return n-1;
        if(x<v[0])
        return -1;
        long long l=0;
        long long r=n-1;
        while(l<=r){
            long long m=l+(r-l)/2;
            if(v[m]==x)
            return m;
            else if(v[m]<x){
                if((m+1)<=n-1 && v[m+1]>x)
                return m;
                else
                l=m+1;
                
            }
            else{
                if((m-1)>=0 && v[m-1]<=x)
                return m-1;
                else
                r=m-1;
            }
        }
        
    }
     int findceil(vector<long long> v, long long n, long long x){
     
        if(x>v[n-1])
        return -1;
        if(x<=v[0])
        return 0;
        long long l=0;
        long long r=n-1;
        while(l<=r){
            long long m=l+(r-l)/2;
            if(v[m]==x)
            return m;
            else if(v[m]<x){
                if((m+1)<=n-1 && v[m+1]>x)
                return m+1;
                else
                l=m+1;
                
            }
            else{
                if((m-1)>=0 && v[m-1]<x)
                return m;
                else
                r=m-1;
            }
        }
        
    }
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    long long target;
    cin>>target;
    cout<<findFloor(v,n,target)<<endl;
    cout<<findceil(v,n,target)<<endl;}

    return 0;
}