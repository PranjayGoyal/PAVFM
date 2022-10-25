#include <iostream>
using namespace std;


int main(){
    int r,c;
    cin >> r >> c;
    cout<<"rows -> "<<r<<endl<<"columns -> "<<c<<endl;
    for (int j = 1; j <= r; j++){
        for (int i = 1; i <= c; i++){
            if(i==1||i==c||j==1||j==r){
                cout << "*";
            }
            else{
                cout<< " ";
            }
        }
        cout<<endl;
    }
    return 0;
}