class Solution {
public:
    vector<string> fizzBuzz(int n) {

        // init
        vector<string> result;

        // append
        for (int i = 0; i < n; i ++){

            // if i divisible by 3 and 5
            if (i % 3 == 0 || i % 5 == 0){
                result.push_back("FizzBuzz");
            }

            // if i divisible by 3
            else if (i % 3 == 0){
                result.push_back("Fizz");
            }

            // if i divisible by 5
            if (i % 5 == 0){
                result.push_back("Buzz");
            }

            // satisfy none of the above conditions
            else{
                string x = to_string(n);  // convert int to str
                result.push_back("x");
            }
        }

        return result;
    }
};