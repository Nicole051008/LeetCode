class Solution {
public:
    int reverse(int x) {

        // use stack

        // init
        stack<int> s;

        string x_str = to_string(x);
        int x_len = x_str.size();

        // check negative number
        bool negative = false;
        int start = 0;

        if (x_str[0] == '-') {
            negative = true;
            start = 1;
        }

        // push all digits into stack
        for (int i = start; i < x_len; i++) {
            s.push(x_str[i] - '0');
        }

        int result = 0;

        // build reversed number
        while (!s.empty()) {
            int digit = s.top();
            s.pop();

            // check overflow before result * 10
            if (result > INT_MAX / 10 ||
                (result == INT_MAX / 10 && digit > 7)) {
                return 0;
            }

            result = result * 10 + digit;
        }

        if (negative) {
            result = -result;
        }

        return result;
    }
};