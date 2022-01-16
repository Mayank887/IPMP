
#include <iostream>
#include <list>
#include <vector>


using namespace std;

vector<int> largest(int arr[],int n,int k){
    vector<int> v;
    list<int> l;
    int i=0;
    int j=0;
    while(j<k){
        while(!l.empty() && l.back()<arr[j]){
          l.pop_back(); 
        }
         l.push_back(arr[j]);
        j++;
    }
    v.push_back(l.front());
    
    for(j;j<n;j++){
        if(arr[i]==l.front())
        l.pop_front();
        i++;
        while(!l.empty() && l.back()<arr[j]){
          l.pop_back(); 
        }
         l.push_back(arr[j]);
         v.push_back(l.front());
        
    }
    return v;
}

void display(vector<int> v){
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    
    cout<<endl;
}


int main()
{
    int arr[]={3,1,5,8,3,7,6};
    vector<int> v=largest(arr,7,3);
    
    display(v);
    
    
    

    return 0;
}
