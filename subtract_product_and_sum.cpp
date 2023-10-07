#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    int sum = 0;
    int product = 1;
    while (n != 0)
    {
        int digit = n % 10;
        product *= digit;
        sum += digit;
        n /= 10;
    }
    int answer = product - sum;
    cout << "Difference: " << answer << endl;
    return 0;
}