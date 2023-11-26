#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    if (n == 0)
        return 1;
    long long N = n;
    if (n < 0)
    {
        x = 1 / x;
        N = -N;
    }

    if (N & 1)
    {
        return x * myPow(x * x, N / 2);
    }
    else
    {
        return myPow(x * x, N / 2);
    }
    return 0;
}

int main()
{
    double x = 2.00000;
    int n = 10;
    cout << myPow(x, n) << endl;
    return 0;
}