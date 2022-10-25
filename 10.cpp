#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element on index " << i << " ";
        cin >> arr[i];
    }
    for (int z = 1; z < n; z++)
    {
        for (int k = 0; k < n-z; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    for(int h =0;h<n;h++){
        cout<<arr[h]<<" ";
    }
}