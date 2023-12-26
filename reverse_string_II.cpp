#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "abcdefg";
    int k = 2;
    int l = 0, r = min(k, (int)s.length());
    while (l < s.length())
    {
        reverse(s.begin() + l, s.begin() + r);
        l += 2 * k;
        r = min(l + k, (int)s.length());
    }
    cout << s << endl;
}