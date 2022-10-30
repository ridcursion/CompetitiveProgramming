#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int findVal(vector<int> v, int a, int val){
    vector<int>::iterator it = find(v.begin(), v.end(), val);
        if (it != v.end()){
            a = distance(v.begin(), it);
        }
    return a;
}
int main(){
    int n; cin >> n;
    vector<int> num1;
    vector<int> num2;
    vector<int> num3;
    vector<int> all;
    for(int i = 0; i < n; i++){
        int s; cin >> s;
        all.push_back(s);
        if(s == 1){
            num1.push_back(s);
        }
        if(s == 2){
            num2.push_back(s);
        }
        if(s == 3){
            num3.push_back(s);
        }
    }
    int mn = min(num1.size(), min(num2.size(), num3.size()));
    cout << mn << endl;    
    for(int i = 0; i < mn; i++){
        int ft, sd, td;
        ft = findVal(all, ft, 1);
        all[ft] = 0;
        sd = findVal(all, sd, 2);
        all[sd] = 0;
        td = findVal(all, td, 3);
        all[td] = 0;
        cout << (ft+1) << " " << (sd+1) << " " <<  (td+1) << endl;
    }
    return 0;
}
