#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_set>
using namespace std;
 vector<int> intersection(int nums1[], int nums2[], int n, int m) {
        unordered_set<int> s;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(s.find(nums1[i])==s.end())
            s.insert(nums1[i]);
        }
        for(int i=0;i<m;i++){
            if(s.find(nums2[i])!=s.end() && find(v.begin(),v.end(),nums2[i])==v.end())
                v.push_back(nums2[i]);
        }
        return v;
        
    }
    
     vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(arr1[i]);
        }
        for(int i=0;i<m;i++){
            s.insert(arr2[i]);
        }
        vector<int> v;
        for(int i:s){
            v.push_back(i);
        }
        return v;
    }

int main() {
    int t;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1>>n2;
        int  a[n1];
        int b[n2];
        for(int i=0;i<n1;i++)
        cin>>a[i];
        for(int i=0;i<n2;i++)
        cin>>b[i];
        vector<int> r1=findUnion(a,b,n1,n2);
        vector<int> r2=intersection(a,b,n1,n2);
        for(auto i:r1)
        cout<<i<<" ";
        cout<<"\n";
        for(auto i:r2)
       cout<<i<<" ";
        cout<<"\n";
        
    }
	
	return 0;
}