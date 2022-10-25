#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int n1=n;
    cout<<"1"<<", ";
    for(int i =2;i<=n;i++){
    
        while(n%i == 0){
            cout<<i<<", ";
            n=n/i;
        }
    } 
    cout<<n1;
    return 0;
    
}