class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0 :
            return false
        
        for front_p in range(len(str(x))/2):
            back_p = len - 1 - front_p
            if x[front_p] != x[back_p]:
                return false
        
        return true