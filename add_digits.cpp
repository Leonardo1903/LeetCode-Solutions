#include <iostream>
using namespace std;

int main()
{
    int n = 38, sum = 0;
    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}