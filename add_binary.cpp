#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "11", b = "1";
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    string ans = "";
    while (i >= 0 || j >= 0 || carry)
    {
        int sum = 0;
        if (i >= 0)
            sum += a[i--] - '0';
        if (j >= 0)
            sum += b[j--] - '0';
        sum += carry;
        carry = sum / 2;
        ans = to_string(sum % 2) + ans;
    }
    cout << ans << endl;
    return 0;
}