#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> map;
    for (string s : strs)
    {
        string t = s;
        sort(t.begin(), t.end());
        map[t].push_back(s);
    }
    vector<vector<string>> anagrams;
    for (auto p : map)
    {
        anagrams.push_back(p.second);
    }
    return anagrams;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> anagrams = groupAnagrams(strs);
    for (auto v : anagrams)
    {
        for (auto s : v)
        {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}
