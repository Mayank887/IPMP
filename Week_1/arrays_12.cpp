#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
 vector<int> twoRepNum(int Arr[], int N)  
    {
        // code here
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<N;i++){
            m[Arr[i]]++;
            
        }
        for(auto i:m){
            if(i.second%2==0)
            v.push_back(i.first);
        }
        if(v[1]>v[0]){
            int temp=v[0];
            v[0]=v[1];
            v[1]=temp;
        }
        return v;
    }
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int  a[n+2];
        for(int i=0;i<n+2;i++)
        cin>>a[i];
        vector<int> v(2);
        v=twoRepNum(a,n+2);
        cout<<v[0]<<" "<<v[1]<<"\n";
        
        
    }
	
	return 0;
}