#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,i;
	cin>>T;
	for(i=0;i<T;i++){
	    int Z,Y,A,B,C;
	    cin >>Z>>Y>>A>>B>>C;
	    if(Z>=10000 && Z<=100000 && Y>=0 && Y<=Z && A>=100 && A<=5000 && B>=100 && B<=5000 && C>=100 && C<=5000 && Z-Y-A-B-C >=0){
	        cout<<"YES";
	    }
	    else{
	        cout<<"NO";
	    }
	}
	return 0;
}
