#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "enter value row and column resp." << endl;
    cin >> row >> col;

    int arr[row][col];

    for (int i = 1; i < row + 1; i++)
    {
        for (int j = 1; j < col + 1; j++)
        {
            cout << "enter the element of " << i << " row and " << j << " column" << endl;
            cin >> arr[i][j];
        }
    }
    int row_start = 1, row_end = row, col_start = 1, col_end = col;

    while (row_start <= row_end && col_start <= col_end)
    {
        for (int g = col_start; g < col_end + 1; g++)
        {
            cout << arr[row_start][g];
        }
        row_start++;

        for (int g = row_start; g < row_end + 1; g++)
        {
            cout << arr[g][col_end];
        }
        col_end--;

        for (int g = col_end; g > col_start - 1; g--)
        {
            cout << arr[row_end][g];
        }
        row_end--;

        for (int g = row_end; g > row_start - 1; g--)
        {
            cout << arr[g][col_start];
        }
        col_start++;
    }
}