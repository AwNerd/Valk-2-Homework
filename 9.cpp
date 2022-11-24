#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        if(x >= 0 && x < 10){
            return true;
        }
        string temp = to_string(x);
        int l = 0;
        int r = temp.size()-1;
        while(l <= r){
            if(temp[l] == temp[r]){
                l++;
                r--;
            } else {
                return false;
            }
        }
        return true;
    }
};
