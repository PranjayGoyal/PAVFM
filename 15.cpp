#include<iostream>
using namespace std;

int main(){
    char ch = 'a';
    cout<<(int)ch<<endl;


//printing a,b,c,d...z using typecasting
    int x;
    for(x=97;x<=122;x++){
        cout<<(char)x<<endl;
    }
    return 0;
}

