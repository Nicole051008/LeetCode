class Solution {
public:
    bool isPalindrome(int x) {
        len = x.size();
        for (int i = 0; i < len; i++){
            if i == len/2{
                return true;
            }
            if x[i] != x[-i+1]{
                return false;
            }
        }
        
    }
};