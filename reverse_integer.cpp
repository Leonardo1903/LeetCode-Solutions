#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;
    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        // Check for number if within range
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        x /= 10;
    }
    cout << ans << endl;
    return 0;
}
