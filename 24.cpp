#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;;
    
    if(n==1){
        cout<<"0";
    }
    if(n==2){
        cout<<"0 1";

    }
    else{
        int a=0,b=1,curr;
        cout<<a<<" "<<b<<" ";
        for(int i =3; i<=n;i++){
            curr = a+b;
            cout<<curr<<" ";
            a=b;
            b=curr;

        }
    }
}