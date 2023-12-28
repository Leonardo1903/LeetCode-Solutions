#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "Let's take LeetCode contest";
    int i = 0, j = 0;
    while (i < s.size() && j < s.size())
    {
        while (j < s.size() && s[j] != ' ')
            j++;
        reverse(s.begin() + i, s.begin() + j);
        i = j + 1;
        j = i;
    }
    cout << s << endl;
}