#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int min = prices[0];
    int max = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] < min)
        {
            min = prices[i];
        }
        else if (prices[i] - min > max)
        {
            max = prices[i] - min;
        }
    }
    cout << max << endl;
    return 0;
}