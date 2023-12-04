#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int prev = 1, curr = 1;
    for (int i = 2; i <= n; i++)
    {
        int temp = curr;
        curr = prev + curr;
        prev = temp;
    }
    cout << curr << endl;
    return 0;
}