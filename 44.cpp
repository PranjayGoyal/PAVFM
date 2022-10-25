#include <iostream>
using namespace std;

class student {    // this is the syntax of a class 
    public: // by this satement we have mentioned all the variables public 
  
    string name;      // here all the variables areby default privately defined and we cannot use them in main function as private variables can only be used within the same class 
    int age;
    bool gender;

    student(){
        cout<<"hi iam the default constructor"<<endl;
    }

    student(string s, int a, bool g){
        name = s;
        a =age;
        g = gender;
    }

    ~student(){   // since total number of objects of student calss is 2 thus destructor will beprinted 2 times.
        cout<<"i am the destructor"<<endl;
    }

    void printDetails(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

};

int main(){
    
    student a;
    a.name  = "pranjay";
    a.age = 20;
    a.gender = 1;

    student b("rahul", 12,1);
    a.printDetails();
}