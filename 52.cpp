#include <iostream>
using namespace std;
//printing all the primes till n

int main()
{
    int b, a;
    cin >> a >> b;
    cout<<"prime numbers between a and b are"<<endl;
    for (int i = a; i <= b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else{
                continue;
            }
        }
        if (j == i)
        {
            cout << i << endl;
        }
    }
}