class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> roman_map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int total = 0;
        int n = s.length();

        for (int i = 0; i < len - 1; i++){
            string cur = roman_map[s[i]];
            string next = roman_map[s[i+1]];
            if (cur < next) {
                total -= cur;
            }
            else {
                total += cur;
            }
        }
        return total;
    }
};