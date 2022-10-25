#include<iostream>
using namespace std;

/* 
1
22
333
4444
*/
int main(){
    int n;
    cin>>n;
    for(int i =1;i<=n;++i){
        int j = 1;
        while(j!= i+1){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
    }
}