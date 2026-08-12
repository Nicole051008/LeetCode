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

        while (p >= 0 && s[p] != ' '){
            p --;
            count ++;
        }
        return count;
    }
};