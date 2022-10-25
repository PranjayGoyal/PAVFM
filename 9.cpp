#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int ini = 0, fin = n - 1;
    while (fin >= ini)
    {
        if (arr[ini] == key)
        {
            return ini;
        }
        else if (arr[fin] == key)
        {
            return fin;
        }
        else if (arr[ini] < key && key < arr[fin])
        {
            int mid;
            mid = (ini + fin) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (key > arr[mid])
            {
                ini = mid + 1;
            }
            else
            {
                fin = mid - 1;
            }
        }
        else{
            return -1;
        }
    }
}

int main()
{
    int n;
    cout << "enter n -> ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter value of array index " << i << " ";
        int j;
        cin >> j;
        arr[i] = j;
    }

    int key,c;
    cout << "enter key -> ";
    cin >> key;
    c = BinarySearch(arr, n, key);
    cout << c;
    return 0;
}