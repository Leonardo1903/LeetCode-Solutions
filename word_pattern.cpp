#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string pattern = "abba";
    string s = "dog cat cat dog";
    unordered_map<char, string> map;
    unordered_map<string, char> map2;
    int i = 0;
    int j = 0;
    bool isPattern = true;
    while (i < pattern.length() && j < s.length())
    {
        string word = "";
        while (j < s.length() && s[j] != ' ')
        {
            word += s[j];
            j++;
        }
        if (map.find(pattern[i]) == map.end() && map2.find(word) == map2.end())
        {
            map[pattern[i]] = word;
            map2[word] = pattern[i];
        }
        else if (map[pattern[i]] != word || map2[word] != pattern[i])
        {
            isPattern = false;
            break;
        }
        i++;
        j++;
    }
    cout << (isPattern ? "true" : "false");
    return 0;
}