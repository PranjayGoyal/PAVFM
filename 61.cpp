#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
//in this type of questions try to find a pattern in the coordinates of the the stars

    for(int i =1; i <=3;i++){
        for(int j=1; j<=n; j++){
            if((i+j)%4==0 || i==2&& j%4==0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}