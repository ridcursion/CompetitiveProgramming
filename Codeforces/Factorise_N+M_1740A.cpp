#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--) {
        int count = 2;
        int n; cin >> n;
        if(n%2!=0){
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
