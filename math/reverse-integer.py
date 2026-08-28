class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        # init

        flag = positive

        # check negative number
        if x < 0:
            flag = nagative

        # convert to string
        x_str = str(abs(x))

        # reverse the string
        reversed_str = x_str[::-1]

        # convert back to int
        result = int(reversed_str)

        if negative:
            result = -result

        return result