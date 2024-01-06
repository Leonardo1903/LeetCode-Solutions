#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    vector<string> words = {"gin", "zen", "gig", "msg"};
    unordered_set<string> set;
    vector<string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    for (string word : words)
    {
        string code = "";
        for (char c : word)
        {
            code += morse[c - 'a'];
        }
        set.insert(code);
    }
    cout << set.size();
    return 0;
}