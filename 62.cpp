#include<iostream>
using namespace std;
//important concept 
int main(){
    string n,p;
    int i;
    cout<<"enter the name "<<endl;
    getline(cin,n); //terminate only when new line character will be encountered.
    cout<<n<<endl;

    cout<<"enter your age ";
    cin>>i;
    cin.ignore(); //flushes the cin function
    cout<<i<<endl;

    
    cout<<"enter the fav food "<<endl;
    getline(cin,p); //terminate only when new line character will be encountered.
    cout<<p<<endl;
}