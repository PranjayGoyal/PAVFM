#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){ 
            if(arr[i]>arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int k =0 ;k<n;k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int n; 
    cout<<"enter n ";
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cout << "enter value of array index " << i << " ";
        cin>>arr[i];
    }
    SelectionSort(arr,n);
}