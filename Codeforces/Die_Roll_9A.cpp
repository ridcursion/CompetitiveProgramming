#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main()
{
    int y, w;
    cin >> y >> w;
 
    int m = min((6 - (y - 1)), (6 - (w - 1)));
    int g = m;
    int d = 6;
 
    while (g != d)
    {
        if (g > d)
        {
            g -= d;
        }
        else
        {
            d -= g;
        }
    }
 
    cout << (m / g) << "/" << (6 / g);
    return 0;
}
