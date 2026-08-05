# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """

        if len(l1) > len(l2):
            for i in range (len(l2),len(l1)):
                l2.append(0)
        elif len(l2) > len(l1):
            for i in range (len(l1),len(l2)):
                l1.append(0)
        
        flag = 0
        for i in l1:

            for j in l2:
                 temp = i + j

                if flag == 1:
                    temp = 1 + i + j
                else:
                    temp = i + j
                
                if temp >= 10:
                    flag = 1
                    result.append(temp[0])
                else:
                    flag = 0
                    result.append(temp)
                
                break

        return result