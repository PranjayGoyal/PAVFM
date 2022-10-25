#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n+1); //Reads a stream of characters into the string buffer, It stops when. it has read length-1 characters or. when it finds an end-of-line character ('\n') or the end of the file.
    cin.ignore(); //used which is used to ignore or clear one or more characters from the input buffer. ... By pressing the “Enter” key after the first input, as the buffer of previous variable has space to hold new data, the program skips the following input of container.
    int ans = 0;
    int i = 0;
    int size;
    while (arr[i] != '\0')
    {
        size = 0;
        while (arr[i] != ' ' || arr[i] != '\0')
        {
            size++;
            i++;
        }
        ans = max(ans, size);
        if(arr[i]!='\0'){
            i++;
        }
    }
    cout << ans << endl;
}