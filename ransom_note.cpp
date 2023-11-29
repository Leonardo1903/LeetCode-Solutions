#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string magazine = "b";
    string ransomNote = "a";
    unordered_map<char, int> map;
    int count = 0;
    for (int i; i < magazine.size(); i++)
        map[magazine[i]]++;
    for (auto i : ransomNote)
        if (map[i] != 0)
        {
            map[i]--;
            count++;
        }
    if (count != ransomNote.size())
    {
        cout << "false";
        return 0;
    }
    else
    {
        cout << "true";
        return 0;
    }
    return 0;
}