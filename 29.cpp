#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int j, i, k;
    for (i = 1; i <= n; i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        if(i==1 || i==n){
            for(k=n-i+1;k<=2*n-i;k++){
                cout<<"*";
            }
        }
        else{
            for(k=n-i+1;k<=2*n-i;k++){
                if(k==n-i+1||k==2*n-i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        
    cout << endl;
    }
    return 0;
}