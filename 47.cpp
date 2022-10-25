#include<iostream>
using namespace std;

class A{
    public:
     void hi(){
         cout<<"hi there"<<endl;
     }
};

class B {
    public:
    void bye(){
        cout<<"goodbye!!"<<endl;
    }
};

class C : public A, public B{
};

int main(){
  C obj;
  obj.hi();
  obj.bye();  
}