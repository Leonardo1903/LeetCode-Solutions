#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 27;
    while (n % 3 == 0)
    {
        n /= 3;
    }
    if (n == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}