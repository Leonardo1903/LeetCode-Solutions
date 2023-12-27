#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string colors = "abaac";
    vector<int> neededTime = {1, 2, 3, 4, 5};
    int totalTime = 0;
    int i = 0, j = 0;
    while (i < neededTime.size() && j < neededTime.size())
    {
        int currTotal = 0, currMax = 0;
        while (j < neededTime.size() && colors[i] == colors[j])
        {
            currTotal += neededTime[j];
            currMax = max(currMax, neededTime[j]);
            j++;
        }
        totalTime += currTotal - currMax;
        i = j;
    }
    cout << totalTime << endl;
}
