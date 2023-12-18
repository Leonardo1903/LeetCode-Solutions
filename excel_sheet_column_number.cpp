#include <iostream>
#include <string>
using namespace std;

int main()
{
    string columnTitle = "AB";
    int n = columnTitle.size();
    int result = 0;
    for (char c : columnTitle)
    {
        int d = c - 'A' + 1;
        result = result * 26 + d;
        ;
    }
    cout << result << endl;
    return 0;
}