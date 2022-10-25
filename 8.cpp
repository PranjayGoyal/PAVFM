#include<iostream>
using namespace std;

void BinaryToDecimal(int n){
    int ans=0,i=1;
    while(n>0){
        int j = n%10;
        ans = ans + j*i;
        i=i*2;
        n=n/10;
    }
    cout<<ans<<endl;
}

void OctalToDecimal(int n){
    int ans=0,i=1;
    while(n>0){
        int j = n%10;
        ans = ans + j*i;
        i=i*8;
        n=n/10;
    }
    cout<<ans<<endl;
}

void HexadecimalToDecimal(string ch){
    int ans = 0;
    int x= 1;
    int s  = ch.size();
    for(int i =s-1;i>=0;i--){
        if(ch[i]>='0' && ch[i] <= '9'){
            ans += x*(ch[i]-'0');  //here we are subtracting two characters they have different ASCII value 
        }
        else if(ch[i]>='A' && ch[i]<= 'F'){
            ans += x*(ch[i]-'A' + 10);
        }
        x *= 16;
    }
    cout<<ans<<endl;
}

int DecimalToBinary(int n){
    int ans=0,x=1;

    while(n > 0){
        ans += x*(n%2);
        n /= 2;
        x *= 10;
    }
return ans;
}

int DecimalToOctal(int n){
    int ans=0,x=1;

    while(n > 0){
        ans += x*(n%8);
        n /= 8;
        x *= 10;
    }
return ans;
}

string DecimalToHexadecimal(int n){
    for(int i = )
}


int main(){
    string ch;
    int n,c,d,e;
    cout<<"input the integer in decimal"<<endl;
    cin>>n;
    cout<<"input the integer in binary"<<endl;
    cin>>d;
    cout<<"input the string "<<endl;
    cin>>ch;
    cout<<"Hexadecimal to binary"<<endl;
    HexadecimalToDecimal(ch);
    cout<<"octal to decimal"<<endl;
    OctalToDecimal(n);
    cout<<"binary to decimal"<<endl;
    BinaryToDecimal(d);
    cout<<"decimal to binary"<<endl;
    c = DecimalToBinary(n);
    cout<<c;
    cout<<"decimal to octal"<<endl;
    e = DecimalToOctal(n);
    cout<<e;
    cout<<"decimal to hexadecimal"<<endl;

    

    return 0;
}