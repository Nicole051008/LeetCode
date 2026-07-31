class Solution {
public:
    bool isValid(string s) {
        int len = s.size();
        bool falg = true;
        for (int i = 0; i < len; i++){
            for (int j = i; j < len; j++){
                if (s[j] == s[i) {
                    break;
                }
            }
            if (j == len - 1){
                return false;
            }
        }
        return flag;
    }
};