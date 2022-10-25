#include<iostream>
#include<vector>
using namespace std;


//vector is a type of an dynamic array or arraylist. 
//its size can grow and shrink dynamically , and no need to provide size at compile time.
//in array if we want to change 5th element we don't need to taverse while in arraylist or vector we have to traverse the whole array 
//thus vector => fast access + dynamic memory allocation
int main(){
    vector<int> v1(5,20); // that means vector of size 5 have 20 at all places.
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    // actually what happens is that whenever new element is added it creates a new 
    //vector of double the size of previous one and copying all the elements from previous vector 
    vector<int> vec;
    for(int  i =0; i<32;i++){
        vec.push_back(i);
        cout<<vec.size()<<" "<<vec.capacity()<<endl;
    }
    // v.reserve(1000);  this code reserves a space of 1000 in the v vector;
    //const variables are those which cannot change their values afterwards
}