#include <iostream>
#include <vector>
#include <array>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    int y = 0;
    cin >> a >> b;
    while(a <= b){
        a *=3;
        b *=2;
        y++;
    }
    cout << y;
}
