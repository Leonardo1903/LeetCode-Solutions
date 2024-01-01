#include <iostream>
#include <string>
using namespace std;

bool ispalindrome(string s, int i, int j)
{
    while (i < j)
    {
        if (s.at(i) == s.at(j))
        {
            i++;
            j--;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    string s = "abca";
    int i = 0, j = s.length() - 1;
    while (i < j)
    {
        if (s.at(i) == s.at(j))
        {
            i++;
            j--;
        }
        else
        {
            if (ispalindrome(s, i + 1, j) || ispalindrome(s, i, j - 1))
            {
                cout << "true";
                return 0;
            }
            else
            {
                cout << "false";
                return 0;
            }
        }
    }
}