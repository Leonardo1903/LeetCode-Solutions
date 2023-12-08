#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "PAYPALISHIRING";
    int n = 3;
    if (n == 1)
    {
        cout << s << endl;
    }
    string ans = "";
    int j;
    int m = s.size();
    for (int i = 1; i <= n; i++)
    {
        j = i;
        if (i == 1 || i == n)
        {
            while (j <= m)
            {
                ans += s[j - 1];
                j = j + 2 * (n - 1);
            }
        }
        else
        {
            while (j <= s.size())
            {
                ans += s[j - 1];
                int tm = j;
                j += 2 * (n - i);
                if (j - 1 < s.size())
                    ans += s[j - 1];
                j = tm + 2 * (n - 1);
            }
        }
    }
    cout << ans << endl;
    return 0;
}