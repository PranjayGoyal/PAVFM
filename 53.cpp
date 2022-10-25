#include<iostream>
using namespace std;

int main(){
    int a =10;
    int b = 4;
    int c = a>b? a-b:b-a; //if the condition a>b is true then c = a-b else c = b-a
    cout<<c<<endl;
    return 0;
}