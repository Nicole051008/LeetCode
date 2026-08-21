class Solution {
public:
    int lengthOfLastWord(string s) {

        // init
        int length = s.size() - 1;
        int p = length;
        int count = 0;

        // skip space
        while (p >= 0 && s[p] == ' ') {
            p--;
        }

        // count the length of the last word
        while (p >= 0 && s[p] != ' ') {
            p--;
            count++;
        }

        // return the length of the last word
        return count;
    }
};