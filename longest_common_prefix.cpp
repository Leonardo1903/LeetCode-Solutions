#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    if (str.empty())
        cout << "" << endl;
    string prefix = str[0];
    for (string s : str)
        while (s.find(prefix) != 0)
            prefix = prefix.substr(0, prefix.length() - 1);
    cout << prefix << endl;

    return 0;
}