
#include <iostream>
#include <vector>

using namespace std;
    int binarysearch(vector<int> &v,int l,int r,int key){
        if(l<=r){
            int mid=l+(r-l)/2;
            if(v[mid]==key && (mid==0 || v[mid-1]<key))
                return mid;
            else if(v[mid]<key)
                return binarysearch(v,mid+1,r,key);
                else
                    return binarysearch(v,l,mid-1,key);
        }
        return -1;
    }
    int majority(vector<int>& nums, int key) {
        int n=nums.size();
       int x=binarysearch(nums,0,nums.size()-1,key);
       if((x+n/2)<=n-1 && nums[x+n/2]==key)
       return 1;
       else
       return 0;
        
    }

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    cout<<majority(v,target)<<endl;

    return 0;
}