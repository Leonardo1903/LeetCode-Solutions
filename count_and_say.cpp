#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n = 4;
    vector<string> v;
    string s = "";
    v.push_back(s);
    for (int i = 1; i <= n; i++)
    {
        s = v[i - 1];
        if (s == "")
        {
            v.push_back("1");
        }
        else
        {
            string ans = "";
            int count = 1, flag = 1;
            for (int i = 0; i < s.size() - 1; ++i)
            {
                if (s[i + 1] == s[i])
                {
                    count++;
                }
                else
                {
                    ans += (count + '0');
                    ans += s[i];
                    count = 1;
                }
            }
            if (flag == 1)
            {
                ans += (count + '0');
                ans += s[s.size() - 1];
            }
            v.push_back(ans);
        }
    }
    cout << v[n] << endl;
    return 0;
}