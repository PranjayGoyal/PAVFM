#include<iostream>
#include<array>
using namespace std;


int main(){
    array<int,5> arr = {1,2,3,4,5};
    array<int,5> arr2;
    arr2 = {1,2,3,4,5,6,7}; // we can also initialize an array like this unlike the normal traditional way
    cout<<arr.at(2)<<endl;
    cout<<arr[3]<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<arr.data()<<endl; //this shows us the address of the array
}