class Solution(object):
    def checkRecord(self, s):
        """
        :type s: str
        :rtype: bool
        """
        # init
        absent = 0
        late = 0

        # check each day
        for c in s:
            if c == 'A':
                absent += 1
                late = 0

            elif c == 'L':
                late += 1

            else:
                late = 0

            # check eligibility
            if absent >= 2 or late >= 3:
                return False

        return True