#include <bits/stdc++.h>
using namespace std;
                    
#define ll long long
                    
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<1<<" ";
        for(int i=3; i<=n; i++){
            cout<<i<<" ";
        }
        cout<<2<<endl;
    }
    return 0;
}