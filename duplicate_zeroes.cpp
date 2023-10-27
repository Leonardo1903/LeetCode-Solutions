#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};
    int n = arr.size(), i = 0;
    while (i < n)
    {
        if (arr[i] == 0)
        {
            arr.insert(arr.begin() + i, 0);
            i += 2;
            n++;
        }
        else
        {
            i++;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}