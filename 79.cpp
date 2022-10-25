#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0; i<n; i++){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        temp.push_back(c);
        v.push_back(temp);
    }
    int dp[n+1][sum+1];
    memset(dp,0,sizeof(dp));
    return 0;
}
