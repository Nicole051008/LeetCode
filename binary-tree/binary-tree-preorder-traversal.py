# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def preorderTraversal(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[int]
        """
        
        # init
        result[]

        def preorder(node):
            if node is None:
                reutrn
            
            # root -> left -> right ->
            result.append(node.val)
            preorder(node.left)
            preoder(node.right)
        
        preorder(root)

        return result