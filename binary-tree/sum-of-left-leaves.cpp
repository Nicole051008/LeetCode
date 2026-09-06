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

        // return if node is empty
        if (node == nullptr){
            return 0;
        }

        int sum = 0;

        if (node != nullptr &&  node -> left != nullptr){
            sum += node -> left -> val;
        }

        sum += sumOfLeftLeaves(node -> left);

        if (node -> right != nullptr){
             sum += sumOfLeftLeaves(node -> right);
        }

        return sum;
    }
};