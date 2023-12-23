#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "egg";
    string t = "add";
    char map_s[128] = {0};
    char map_t[128] = {0};
    int len = s.size();
    for (int i = 0; i < len; ++i)
    {
        if (map_s[s[i]] != map_t[t[i]])
        {
            cout << "false" << endl;
        }
        else
        {
            map_s[s[i]] = i + 1;
            map_t[t[i]] = i + 1;
        }
    }
    cout << "true" << endl;
    return 0;
}