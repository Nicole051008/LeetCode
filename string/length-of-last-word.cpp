class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.size() - 1;
        int p = length;
        while (s[p] != ' ' && p > 0){
            p --;
        }
        return length - p;
    }
};