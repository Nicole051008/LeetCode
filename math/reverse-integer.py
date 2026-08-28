class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        # init
        flag = 1

        # check negative number
        if x < 0:
            flag = 0

        # convert to string
        x_str = str(abs(x))

        # reverse the string
        reversed_str = x_str[::-1]

        # convert back to int
        result = int(reversed_str)

        if not flag:
            result = -result

        if result < -2**31 or result > 2**31 - 1:
            return 0

        return result