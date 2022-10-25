#include<iostream>
using namespace std;

/*
forn=3
1
0 1
0 1 0
*/

int main(){
    int n;
    cin>>n;
    //we observe that 1 is being placed at row + columm = even

    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}