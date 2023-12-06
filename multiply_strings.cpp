#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "123";
    string s2 = "456";
    int n1 = s1.size();
    int n2 = s2.size();
    int n = n1 + n2;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = 0;
    for (int i = n1 - 1; i >= 0; i--)
    {
        for (int j = n2 - 1; j >= 0; j--)
        {
            int temp = (s1[i] - '0') * (s2[j] - '0');
            a[i + j + 1] += temp;
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        a[i - 1] += a[i] / 10;
        a[i] = a[i] % 10;
    }
    string s = "";
    int i = 0;
    while (a[i] == 0)
        i++;
    for (; i < n; i++)
        s += a[i] + '0';
    cout << s << endl;
    return 0;
}