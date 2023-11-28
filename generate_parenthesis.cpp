#include <iostream>
#include <vector>
using namespace std;

void generate(vector<string> &ans, string s, int open, int close, int n)
{
    if (close == n)
    {
        ans.push_back(s);
        return;
    }
    if (open < n)
        generate(ans, s + "(", open + 1, close, n);
    if (close < open)
        generate(ans, s + ")", open, close + 1, n);
}
int main()
{
    int n = 3;
    vector<string> ans;
    generate(ans, "", 0, 0, n);
    for (auto i : ans)
    {
        cout << i << endl;
    }
    return 0;
}