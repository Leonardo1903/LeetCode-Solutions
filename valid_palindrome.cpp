#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "A man, a plan, a canal: Panama";
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            res += (s[i] + ('a' - 'A'));
        else if (s[i] >= 'a' && s[i] <= 'z')
            res += s[i];
        else if (s[i] >= '0' && s[i] <= '9')
            res += s[i];
    }
    int i = 0;
    int j = res.length() - 1;
    while (i < j)
    {
        if (res[i] != res[j])
        {
            cout << "false";
            return 0;
        }
        else
        {
            cout << "true";
            return 0;
        }
        i++;
        j--;
    }

    return 0;
}