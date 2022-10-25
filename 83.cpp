#include <bits/stdc++.h>
using namespace std;

// void solve(int sum, int i, int cs, int n, int &count)
// {
//     if (cs != sum && i == n)
//         return;

//     if (cs == sum){
//         count++;
//         return;
//     }

//     if (cs > sum)
//         return;

//     solve(sum , i+1 , cs+i+1 , n, count);
//     solve(sum , i+1 , cs , n, count);
// }

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int mod = 1000000007;
    for (int i = 1; i <= n; i++)
        sum += i;
    if (sum % 2 != 0)
        cout << 0 << endl;
    else{
        sum /= 2;
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        for(int i=0;i < n+1; i++){
            for(int j =0; j<sum+1; j++){
                if(i==0 && j==0){
                    dp[i][j] = 1;
                    continue;
                }
                else if(i==0){
                    dp[i][j] = 0;
                    continue;
                }
                else if(j==0){
                    dp[i][j] = 1;
                    continue;
                }
                if(i <= j){
                    dp[i][j] = (dp[i-1][j]) % mod + (dp[i-1][j-i]) % mod;
                } 
                else{
                    dp[i][j] = dp[i-1][j] % mod;
                }
            }
        }
        // int count = 0;
        // for (int i = 1; i <= n; i++){
        //     int cs = 0;
        //     cs += i;
        //     solve(sum, i, cs, n,count);
        // }


        // for (int i = 0; i < n + 1; i++)
        // {
        //     for (int j = 0; j < sum + 1; j++)
        //     {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        cout <<dp[n][sum]/2<< endl;
    }
}