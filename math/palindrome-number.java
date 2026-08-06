class Solution {
    public boolean isPalindrome(int x) {
        if (x[0] == "-"){
            return false;
        }
        for (int i = 0; i < x.length / 2; i++){
            for (int j = x.length; i> x.length / 2; i--){
                if x[i] != x[j] {
                    return false;
                }
            }
        }
        return true;
    }
}