#include<iostream>
#include <set>
#include <algorithm>
#include<vector>
using namespace std;
 long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long max=0;
        long long end=0;
        for(int i=0;i<n;i++){
            end=end+arr[i];
            if(max<end){
                max=end;
            }
            if(end<0)
            end=0;
            
        }
        return max;
        
    }

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  cout<<maxSubarraySum(arr,n);
    return 0;
  }