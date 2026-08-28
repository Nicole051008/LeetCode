class Solution {
public:
    int reverse(int x) {

        // init
        stack<int> s;
        
        string x_str = to_string(x);
        int x_len = x_str.size();

        // check negative number
        if (x_str[0] == '-'){
            s.push(x_str[0] - '0');
        }

        // push all digits into stack
        for (int i = 0; i < x_len; i ++){
            s.push(x_str[i] - '0');
        }


    }
};