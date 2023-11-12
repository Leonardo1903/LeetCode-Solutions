#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    if (n <= 0)
    {
        return false;
    }
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else if (n % 3 == 0)
        {
            n = n / 3;
        }
        else if (n % 5 == 0)
        {
            n = n / 5;
        }
        else
        {
            break;
        }
    }
    if (n == 1)
    {
        cout << "Ugly Number" << endl;
    }
    else
    {
        cout << "Not an Ugly Number" << endl;
    }
    return 0;
}