#include <iostream>
#include <vector>
#include <array>
#include<string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int a = 0;
    int d = 0;
    for(int i = 0; i <= s.length(); i++){
        if(s[i] ==  'A'){
            a+=1;
        }else if(s[i] ==  'D'){
            d+=1;
        }
    }
    if(a > d){
        cout << "Anton";
    }else if(d == a){
        cout << "Friendship";
    }else{
        cout << "Danik";
    }
}
