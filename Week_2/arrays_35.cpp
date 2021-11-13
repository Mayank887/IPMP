#include <iostream>


using namespace std;
  
  void booleanMatrix(int R, int C, int **matrix)
{
    int r=0;
    int c=0;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(i==0 && matrix[i][j]==1)
            r=1;
            if(j==0 && matrix[i][j]==1)
            c=1;
            if(matrix[i][j]==1){
                matrix[0][j]=1;
                matrix[i][0]=1;
            }
        }
    }
    for(int i=1;i<R;i++){
        for(int j=1;j<C;j++){
            if(matrix[0][j]==1 || matrix[i][0]==1)
            matrix[i][j]=1;
        }
    }
    if(r==1){
    for(int i=0;i<C;i++)
    matrix[0][i]=1;}
    if(c==1){
    for(int i=0;i<R;i++)
    matrix[i][0]=1;}
    
    
}
 
            
int main() {
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        int **a;
        a=new int*[r];
        for(int i=0;i<r;i++){
            a[i]=new int[c];
        }
        
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
            cin>>a[i][j];
        }
        
       booleanMatrix(r,c,a);
       for(int i=0;i<r;i++){
            for(int j=0;j<c;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
    
        
    }
	
	return 0;
}