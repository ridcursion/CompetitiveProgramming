#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int k, r = 0;
    cin >> k >> r;
 
    int v1 = 1;
 
    int t = 9;
    while (t--)
    {
        if ((k * v1) % 10 == 0 || ((k * v1) % 10) == r)
        {
            cout << v1;
            break;
        }
        v1++;
    }
}
