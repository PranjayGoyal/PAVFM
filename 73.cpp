#include <iostream>
#include <map>
using namespace std;
#include <vector>
#include <functional>

int main()
{
    map<string, vector<int>, less<vector<int>>> m;
    m["aa"].push_back(74259295);
    m["s"].push_back(1000880);
    m["s"].push_back(183798);

    for (auto &i : m)
    {
        cout << i.first << " ";
        for (auto &i2 : i.second)
        {
            cout << i2 << " ";
        }
        cout<<endl;
    }
    return 0;
}