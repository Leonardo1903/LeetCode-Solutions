#include <iostream>
using namespace std;

int main()
{
    int ax1 = -3, ay1 = 0, ax2 = 3, ay2 = 4, bx1 = 0, by1 = -1, bx2 = 9, by2 = 2;
    int A1 = 0, A2 = 0, CA = 0;
    A1 = (ax2 - ax1) * (ay2 - ay1);
    A2 = (bx2 - bx1) * (by2 - by1);
    if (ax2 < bx1 || bx2 < ax1 || by2 < ay1 || ay2 < by1)
    {
        cout << A1 + A2;
    }
    else
    {
        int cl = min(bx2, ax2) - max(bx1, ax1);
        int cb = min(ay2, by2) - max(by1, ay1);
        CA = cl * cb;
    }
    cout << A1 + A2 - CA;
    return 0;
}