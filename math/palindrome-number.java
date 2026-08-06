class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0){
            return false;
        }

        String s = Integer.toString(x);

        for (int i = 0; i < s.length / 2; i++){
            for (int j = s.length; i> s.length / 2; i--){
                if (s[i] != s[j]) {
                    return false;
                }
            }
        }
        return true;
    }
}