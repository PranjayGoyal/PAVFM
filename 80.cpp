#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int a, b;
    cin >> a >> b;
    vector<vector<ll>> dp(a + 1, vector<ll>(b + 1, INT_MAX));
    for (int i = 0; i < a + 1; i++){
        for (int j = 0; j < b + 1; j++){
            if (i == j){
                dp[i][j] = 0;
            }
            else{
                for (int k = 1; k < i; k++){
                    dp[i][j] = min(dp[i][j], 1 + dp[k][j] + dp[i-k][j]);
                }
                for (int k = 1; k < j; k++){
                    dp[i][j] = min(dp[i][j], 1 + dp[i][k] + dp[i][j-k]);
                }
            }
        }
    }

    // for (int i = 0; i < a + 1; i++)
    // {
    //     for (int j = 0; j < b + 1; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << dp[a][b] << endl;
}