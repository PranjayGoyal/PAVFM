#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    for(int i = 0 ; i < v.size() ; i++){   //  here indexing starts from 1 not from 0 
        cout<< v[i] << endl;
    }
    return 0;
}
