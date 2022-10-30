#include <iostream>
using namespace std;
 
int main(){
    long n, x;
    int k = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++){
        char t;
        long a;
        cin >> t >> a;
        if (t == '+'){
            x = x + a;
        }else{
            if (x < a){
                k++;
            }else{
                x -= a;
            }
        }
    }
    cout << x << " " << k;
    return 0;
}
