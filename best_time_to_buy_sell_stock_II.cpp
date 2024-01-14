#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int j = prices.size() - 1, i = j - 1, res = 0;
    while (i >= 0)
    {
        if (prices[j] - prices[i] > 0)
        {
            res += prices[j] - prices[i];
            j--;
        }
        else
            j = i;
        i--;
    }
    cout << res << endl;
    return 0;
}