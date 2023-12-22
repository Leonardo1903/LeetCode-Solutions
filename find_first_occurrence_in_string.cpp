#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string haystack = "hello";
    string needle = "ll";
    int n = haystack.size();
    int m = needle.size();
    int j;
    for (int i = 0; i <= n - m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (j == m)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}