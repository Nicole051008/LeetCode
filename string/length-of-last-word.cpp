class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.size() - 1;
        int p = length;
        int count = 0;

        // skip space
        while (p >= 0 && s[p] == ' ') {
            p--;
        }

        while (s[p] != ' ' && p >= 0){
            p --;
            count ++;
        }
        return count;
    }
};