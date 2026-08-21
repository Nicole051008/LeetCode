/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {

        // init
        List<Integer> result = new ArrayList<>();

        // perform inorder traversal
        inorder(root, result);

        // return traversal result
        return result;
    }

    public void inorder(TreeNode root, List<Integer> result) {

        // stop at an empty node
        if (root == null) {
            return;
        }

        // traverse left -> root -> right
        inorder(root.left, result);
        result.add(root.val);
        inorder(root.right, result);
    }
}