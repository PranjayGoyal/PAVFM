//half pyramid afteer 180 degree rotation
#include<iostream>
using namespace std;

/*
for n=3
      *
     **
    ***
*/    

int main(){
    int n,i,z,j,k = 1;
    cin>>n;
    /*for(j = 1; j<=n; j++){
        for(i = 1; i<=n-k ; i++){
            cout<<" ";
        }
        for(z=n-k;z<n;z++){
            cout<<"*";
        }
        cout<<endl;
        k++; 
    }
*/

for(j = 1; j<=n; j++){
        for(i = 1; i<=n ; i++){
            if(i<=n-j){
            cout<<" ";
        }
        else{
            cout<<"*";
        }
        }
        cout<<endl;
         
    }


return 0;
}