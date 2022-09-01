#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int w = 0;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if(x <= h){
            w+=1;
        }else{
            w+=2;
        }
    }
    cout << w;
}
