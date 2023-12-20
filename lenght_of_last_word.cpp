#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello World";
    int siz = s.size(), count = 0, flag = 0;
    for (int i = siz - 1; i >= 0; i--)
    {
        if (s[i] == ' ' && flag)
            break;
        if (s[i] != ' ')
        {
            flag = 1;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}