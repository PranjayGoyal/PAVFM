#include<iostream>
using namespace std;

int funct(int arr[], int n ){
    for(int i =0 ;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return i;
            }
        }
    }
}

int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int arr[n];

    for(int i =0; i<n;i++){
        cout<<"enter the element at index "<<i<<" ";
        cin>>arr[i];
    }

    int a = funct(arr,n);
    cout<<a;
}