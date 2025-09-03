#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0)return "0";
        string s;
        int flag;
        if (num < 0) { flag = 1; 
        num = abs(num);
        }
        else flag = 0;
        while (num != 0) {
            s.push_back('0'+num%7);
            num = num / 7;
        }
        if (flag == 1) {
            s.push_back('-');
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
int main() {
    Solution sol;
    cout << sol.convertToBase7(100) << endl;   // Êä³ö: 202
    cout << sol.convertToBase7(-7) << endl;    // Êä³ö: -10
    cout << sol.convertToBase7(0) << endl;     // Êä³ö: 0
}