#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

int main()
{
    string s = "loveleetcode";
    char c = 'e';
    vector<int> position;
    vector<int> ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            position.push_back(i);
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        int m = INT_MAX;
        for (int j = 0; j < position.size(); j++)
        {
            m = min(m, abs(i - position[j]));
        }
        ans.push_back(m);
    }
    for (int i : ans)
    {
        cout << i << " ";
    }
}