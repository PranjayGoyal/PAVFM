#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
    cin>>t;
	while(t--){
		int x;string s;cin>>x>>s;
		int a[x],mx=0,ans=0;
		for(int i=0;i<x;i++){
			cin>>a[i];
			if(s[i]=='1')ans+=max(mx,a[i]);
			if(s[i]=='0'||mx>a[i])mx=a[i];
		}
		cout<<ans<<"\n";
	}
	return 0;
}
