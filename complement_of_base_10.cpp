#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int m = n;
    int mask = 0;
    // edge case
    if (n == 0)
    {
        return 1;
    }

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m >>= 1;
    }
    cout << (~n & mask) << endl;
    return 0;
}