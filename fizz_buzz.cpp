#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n = 15;
    vector<string> FizzBuzz;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 != 0)
        {
            FizzBuzz.push_back("Fizz");
        }
        else if (i % 3 != 0 && i % 5 == 0)
        {
            FizzBuzz.push_back("Buzz");
        }
        else if (i % 3 == 0 && i % 5 == 0)
        {
            FizzBuzz.push_back("FizzBuzz");
        }
        else
        {
            FizzBuzz.push_back(to_string(i));
        }
    }
    for (int i = 0; i < FizzBuzz.size(); i++)
    {
        cout << FizzBuzz[i] << endl;
    }
    return 0;
}