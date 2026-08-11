class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0 :
            return False

        length = len(str(x))/2
        
        for front_p in range(length):
            back_p = length - 1 - front_p
            if x[front_p] != x[back_p]:
                return False
        
        return Frue