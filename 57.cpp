#include<iostream>
using namespace std;

bool CheckPythogorous(int x,int y,int z){
    int a,b,c;
    a = max(x,max(y,z));
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        c=x;
        b=z;
    }
    else{
        b=x;
        c=y;
    }
    if((a*a == (b*b)+(c*c))){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int x,y,z;
    cin>>x>>y>>z;

    if(CheckPythogorous(x,y,z)){
        cout<<"is a Triplet";
    }
    else{
        cout<<"is not a triplet";
    }
}