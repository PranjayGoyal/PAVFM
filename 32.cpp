#include <iostream>
using namespace std;

int main(){
    int r,c,i,j;
    cin >> r >> c;
    cout << "rows -> " << r << endl
         << "columns -> " << c << endl;

    for (j = 1; j <= r; j++){
        if (j == 1 || j == r){
            for (i = 1; i <= c; i++){
                cout << "*";
            }
        }
        else{
            for (i = 1; i <= c; i++){
                if (i == 1 || i == c){
                    cout << "*";
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