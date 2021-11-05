#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
    bool increasingTriplet(int nums[],int n) {
        
        if(n<3)
            return false;
        int min=nums[0];
        int max=nums[n-1];
        int a[n];
        int b[n];
        a[0]=-1;
        b[n-1]=-1;
        
        for(int i=1;i<n;i++){
            if(nums[i]<min || nums[i]==min){
                min=nums[i];
                a[i]=-1;
                continue;
            }
            if(nums[i]>min){
                a[i]=1;
            }
            
        }
        for(int i=n-2;i>=0;i--){
            if(nums[i]>max || nums[i]==max){
                max=nums[i];
                b[i]=-1;
                continue;
            }
            if(nums[i]<max){
                b[i]=1;
            }
            
        }
        for(int i=0;i<n;i++){
            if(a[i]!=-1 && b[i]!=-1)
                return 1;
        }
        return 0;
        
    }
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int  a[n];
        
        
            for(int j=0;j<n;j++)
            cin>>a[j];
        
        
        cout<<increasingTriplet(a,n)<<endl;
        
    }
	
	return 0;
}