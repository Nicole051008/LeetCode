class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int len = s.length();
        for (int i = 0; i < len; i++){
            if (i == len/2){
                return true;
            }
            if (s[i] != s[-i+1]){
                return false;
            }
        }
        
    }
};