#include <iostream>
using namespace std;

int main()
{
    int x = 121;
    long long int reversed = 0;
    long long int temp = x;
    while (temp != 0)
    {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    if (reversed == x)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;

        return 0;
    }