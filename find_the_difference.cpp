#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "abcd";
    string t = "abcde";
    for (int i = 0; i < s.size(); i++)
    {
        t[i + 1] += t[i] - s[i];
    }
    cout << t[t.size() - 1];
    return 0;
}