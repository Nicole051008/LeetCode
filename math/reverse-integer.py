class Solution(object):
    def reverse(self, x):
        
        """
        :type x: int
        :rtype: int
        """

        # init
        result = 0

        while x != 0:
            digit = int(x % 10) if x > 0 else -int((-x) % 10)
            x = int(x / 10)

            # check overflow
            if result > 214748364 or (result == 214748364 and digit > 7):
                return 0

            if result < -214748364 or (result == -214748364 and digit < -8):
                return 0

            result = result * 10 + digit

        return result