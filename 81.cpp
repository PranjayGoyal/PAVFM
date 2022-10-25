#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

long long solve(int i, int j ,vector<int> v){
    if(i>j){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    int x = v[i] + min(solve(i+2,j,v),solve(i+1,j-1,v));
    int y = v[j] + min(solve(i+1,j-1,v),solve(i,j-2,v));
    dp[i][j]= max(x,y);
    return dp[i][j];
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    memset(dp, -1, sizeof(dp));
    int x =solve(0,n-1,v);
    cout<<x<<endl;
    return 0;
}
