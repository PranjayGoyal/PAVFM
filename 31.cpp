#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
       for(int j=1;j<=i;j++){
           cout<<"*";
       }
       if(i==n){
        for(int j=i+1;j<=2*n-1;j++){
           cout<<"*";
        }
       }
       else{
           for(int k =1;k<=2*(n-i+1)-3;k++){
               cout<<" ";
           }
           for(int k=2*n-i;k<=2*n-1;k++){
               cout<<"*";
           }
       }
       cout<<endl;
    }
     for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<"*";
       }
       if(i==n){
        for(int j=i+1;j<=2*n-1;j++){
           cout<<"*";
        }
       }
       else{
           for(int k =1;k<=2*(n-i+1)-3;k++){
               cout<<" ";
           }
           for(int k=2*n-i;k<=2*n-1;k++){
               cout<<"*";
           }
       }
       cout<<endl;
    }
}