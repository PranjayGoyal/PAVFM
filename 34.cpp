#include<iostream>
using namespace std;

int main(){
    int i,j,k;
    i = 1;
    j = 2;
    k = i+j+ (++i) + (++j) + (i++) + (j++); // 1 + 2 + 2 + 3 + 2 + 3 
    cout<<"i->"<<i<<"\nj->"<<j<<"\nk->"<<k<<endl;
    return 0; 
}