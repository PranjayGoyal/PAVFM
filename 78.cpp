#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    int sum =0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
        sum += a;
    }
    vector<int> dp(sum + 1,0);
    dp[0]=1;
    for (int i = 0; i < n; i++){
        for (int j = sum; j>=v[i]; j--){
            if(dp[j-v[i]]){
                dp[j] = 1;
            }
        }
    }
    int count=0;
    vector<int> temp;
    for(int i = 1; i <sum +1; i++){
        if(dp[i]){
            count++;
            temp.push_back(i);
        }
    }    
    cout<<count<<endl;
    for(int i = 0; i < temp.size(); i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}
