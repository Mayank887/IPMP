#include<iostream>
#include <set>
#include <algorithm>
#include<vector>
using namespace std;
 void rotateArr(int arr[], int d, int n){
        // code here
          d=d%n;
    int gcd=__gcd(n,d);
    for(int i=0;i<gcd;i++){
        int temp=arr[i];
        int j=i;
        while(1){
            int k=j+d;
            if(k>=n)
            k-=n;
            if(k==i)
            break;
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
    }
    }

int main(){
  int n,d;
  cin>>n>>d;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  rotateArr(arr,d,n);
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
  cout<<endl;
    return 0;
  }