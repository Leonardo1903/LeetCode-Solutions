#include <iostream>
#include <unordered_set>
using namespace std;

int solve(int n)
{
    int x = 0;
    while (n > 0)
    {
        int c = n % 10;
        x = x + c * c;
        n = n / 10;
    }
    return x;
}
int main()
{
    int n = 19;
    unordered_set<int> s;
    while (n != 1 && s.find(n) == s.end())
    {
        s.insert(n);
        n = solve(n);
    }
    if (n == 1)
    {
        cout << "Happy Number" << endl;
    }
    else
    {
        cout << "Not a Happy Number" << endl;
    }
    return 0;
}
