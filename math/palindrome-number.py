class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0 :
            return False

        s = str(x)
        
        for front_p in range(s/2):
            back_p = length - 1 - front_p
            if s[front_p] != s[back_p]:
                return False
        
        return True