#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= 2*n - 1; j++){
        
                if (j == n - i + 1){
                    cout << "*";
                }
                else if (j == n + i-1){
                    if(i==1){
                        continue;
                    }
                    else{
                    cout << "*";
                    }
                }
                else{
                    cout << " ";
                }
        }
        cout << endl;
    }
    for (int i = n; i >= 1; --i){
        for (int j = 1; j <= 2*n - 1; j++){
        
                if (j == n - i + 1){
                    cout << "*";
                }
                else if (j == n + i-1){
                    if(i==1){
                        continue;
                    }
                    else{
                    cout << "*";
                    }
                }
                else{
                    cout << " ";
                }
        }
        cout << endl;
    }
return 0;
}