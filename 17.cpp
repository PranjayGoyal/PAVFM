#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool c=0;
    for(int i =2;i<=sqrt(n);i++){ //can also write simply i<n
        if(n%i==0){
            cout<<"non-prime"<<endl;
            c=1;
            break;
        }
    }
    if(c == 0){
        cout<<"prime"<<endl;
    }
}