#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string num1 = "123";
    string num2 = "456";
    int i = num1.length() - 1, j = num2.length() - 1, carry = 0;
    string ans = "";
    while (i >= 0 || j >= 0 || carry > 0)
    {
        if (i >= 0)
        {
            carry = carry + num1[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            carry = carry + num2[j] - '0';
            j--;
        }

        ans += char(carry % 10 + '0');
        carry = carry / 10;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}