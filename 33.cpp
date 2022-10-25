#include "bits/stdc++.h"
using namespace std;

const int N = 1e6 + 2;

int main()
{
    int n;
    cout << "enter n ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter the element at index " << i << " ";
        cin >> arr[i];
    }
    
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    int minidx = INT_MAX;

    for (int i = 0; i < n; i)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else{
        cout<<minidx<<endl;
    }
    
}