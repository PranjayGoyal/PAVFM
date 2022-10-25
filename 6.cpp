#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout<<"enter value row and column resp."<<endl;
    cin>>row>>col;

    int arr[row][col];

    for(int i = 1; i<row+1 ; i++){
        for(int j =1; j<col+1; j++){
            cout<<"enter the element of "<<i<<" row and "<<j<<" column"<<endl;
            cin>>arr[i][j];
        }
    }

    for(int i=1;i<row+1;i++){
        for(int j=1;j<col+1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int x;
    cin>>x;

    bool flag = false;

    for(int i = 1; i<row+1 ; i++){
        for(int j =1; j<col+1; j++){
        if(arr[i][j]== x){
            flag = true;
            cout<<"the number searched is "<<x<<endl;
        }
        }
    }
    
    if(flag == false){
        cout<<"the number is not present";
    }

}