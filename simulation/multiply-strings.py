class Solution(object):
    def multiply(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """

        # convert str to int
        num1_int = int(num1)
        num2_int = int(num2)

        # product
        temp = num1_int * num2_int

        # convert int to str
        result = str(temp)


        # return
        return result