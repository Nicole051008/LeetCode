class Solution {
public:
    string addBinary(string a, string b) {
        int pa = a.size() - 1;
        int pb = b.size() - 1;
        int flag = 0;
        string result = "";
        
        while ( pa >= 0 || pb >= 0 || flag >0){
            int sum = flag;

            if (pa >= 0) {
                sum += a[pa] - '0';
                pa--; 
            }

            if (pb >= 0){
                sum += b[pb] = '0';
                pb--;
            }

            flag = sum/2;
            int cur = sum %2;
            result.push_back(cur + '0');

        }
        return result;
        
    }
};