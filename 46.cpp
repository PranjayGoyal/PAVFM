#include<iostream>
using namespace std;

class A{
    private:
    int age;
    public:
    string name;
    void hih(){
        cout<<"hih"<<endl;
    } 
    protected:
    int salary;
};

class B: private A{   // this line means we have inherited all the public an protected from class A and given it to the private section of the class B
    public: 
    void byy(){
        cout<<"bye"<<endl;
    }
};

class C: public B{
    public:
    void net(){
        cout<<"net"<<endl;
    }
};

int main(){
    C obj; 
    obj.net();
    obj.byy();
//  obj.hih(); // will throw error since hih() funv=ction is in the privately defined in class B.
}

