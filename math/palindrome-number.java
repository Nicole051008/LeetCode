class Solution {
    public boolean isPalindrome(int x) {

        if (x < 0) {
            return false;
        }

        String s = Integer.toString(x);

        for (int i = 0; i < s.length() / 2; i++) {
            for (int j = s.length() - 1; j >= s.length() / 2; j--) {

                if (s.charAt(i) != s.charAt(j)) {
                    return false;
                }

                break; 
            }
        }

        return true;
    }
}