class Solution {
public:
    bool isPalindrome(int x) {

        // if negative, return not palindrome
        if (x < 0){
            return false;
        }

        string s = to_string(x);
        int len = s.length();

        //  compare characters from both ends
        for (int i = 0; i < len/2; i++){
            if (s[i] != s[len-i-1]){
                return false;
            }
        }

        // no differences found
        return true;
    }
};