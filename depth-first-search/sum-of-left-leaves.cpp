/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {

        // return if root is empty
        if (root == nullptr){
            return 0;
        }

        int sum = 0;

        if (root != nullptr &&  root -> left != nullptr){
            sum += root -> left -> val;
        }

        sum += sumOfLeftLeaves(root -> left);

        if (root -> right != nullptr){
             sum += sumOfLeftLeaves(root -> right);
        }

        return sum;
    }
};