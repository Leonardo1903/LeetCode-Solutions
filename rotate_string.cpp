#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool canRotate(string s, string goal)
{
    int n = s.size();
    char temp;
    for (int i = 0; i < n; i++)
    {
        temp = goal[0];
        for (int j = 0; j < n - 1; j++)
        {
            goal[j] = goal[j + 1];
        }
        goal[n - 1] = temp;
        if (s == goal)
        {
            cout << "true" << endl;
            return true;
        }
    }
    cout << "false" << endl;
    return false;
}

int main()
{
    string s = "abc";
    string goal = "bca";
    canRotate(s, goal);
    return 0;
}