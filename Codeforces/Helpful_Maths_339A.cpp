#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
   string s;
   cin >> s;
   s.erase(remove(s.begin(), s.end(), '+'), s.end());
   sort(s.begin(), s.end());
   for(int i=0;i<s.length();i++){
        cout<<s[i];
        if(i == s.length()-1){
            break;
        }
        cout<<"+";
    }
 
   return 0;
}
