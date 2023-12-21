#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int columnNumber = 701;
    string ans = "";
    while (columnNumber > 0)
    {
        if (columnNumber % 26 == 0)
        {
            ans.push_back(25 + 'A');
            columnNumber--;
        }
        else
        {
            ans.push_back(columnNumber % 26 + 'A' - 1);
        }
        columnNumber /= 26;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}