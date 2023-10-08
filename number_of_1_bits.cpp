#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a decimal number: ";
    int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        // checking last bit
        if (n & 1)
        {
            count += 1;
        }
        n = n >> 1;
    }
    cout << "Number of 1 bits: " << count << endl;
    return 0;
}