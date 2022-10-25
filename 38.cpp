#include <iostream>
using namespace std;

int main()  
{
    int x; 
    int m; 
    int n;
    int base_address;
    int row_major_address;
    int column_major_address;
    int row_number;
    int column_number;
    cout << "\ntotal number of rows:";
    cin >> row_number;
    cout << "\ntotal number of column:";
    cin >> column_number;
    int a[row_number][column_number];
    cout << "Give the total " << row_number * column_number << " number:";
    for (int i = 0; i < row_number; i++)
    {
        for (int j = 0; j < column_number; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Give the base address:";
    cin >> base_address;
    cout << "Give the number to find the address:";
    cin >> x;
    for (int i = 0; i < row_number; i++)
    {
        for (int j = 0; j < column_number; j++)
        {
            if (a[i][j] == x)
            {
                m = i;
                n = j;
            }
        }
    }
    row_major_address = base_address + sizeof(int) * (row_number * m + n);
    column_major_address = base_address + sizeof(int) * (column_number * n + m);
    cout << "\n1.Raw major address:" << row_major_address << "\n2.Column major address : " << column_major_address << endl;
    return 0;
}