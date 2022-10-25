#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of letters in your word"<<endl;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check =true;

    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){
            check = false;
            break;
        }
    }

    if(check == true){
        cout<<"the entered word is a palindrome";
    }
    else{
        cout<<"the entered word is not a palindrome";
    }

}