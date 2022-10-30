#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
    int n, k;
    cin >> n >> k;
    string a = "abcdefghijklmnopqrstuvwxyz";
    vector<char> alp;
    vector<char> occ;
    string s;
    int count = 0;
    for(int i = 0; i < 26; i++){
        alp.push_back(a[i]);
    }
    for(int i = 0; i < n; i++){ 
        if(i<k){
            s+=alp[i];
            occ.push_back(alp[i]);
        }else if((n - k >= 0) || (i >= k)){
            if(count>=occ.size()){
                count = 0;
            }
            s+=occ[count];
            count++;
        }
    }
    cout << s;
    return 0;
}
