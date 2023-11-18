#include <iostream>
using namespace std;

int main()
{

    int a = 0, b = 1, ans = 0;
    int n = 10;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        ans = a + b;
        a = b;
        b = ans;
    }
    return 0;
}