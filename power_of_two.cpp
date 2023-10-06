#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cout << "Enter the number: ";
    cin >> n;
    for (i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            cout << "True" << endl;
            break;
        }
        else
        {
            cout << "False" << endl;
        }
    }
    return 0;
}
