#include <iostream>
using namespace std;

long long int binarySearch(int n)
{
    int s = 0, e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = 0;
    while (s < e)
    {
        long long int sqr = mid * mid;
        if (sqr == n)
        {
            return mid;
        }
        else if (sqr < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << binarySearch(n) << endl;
    return 0;
}