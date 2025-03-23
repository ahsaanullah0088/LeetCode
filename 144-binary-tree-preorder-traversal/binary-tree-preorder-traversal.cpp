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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        TreeNode* cur = root;
        stack<TreeNode*> stack;

        while (cur || !stack.empty()) {
            if (cur) {
                res.push_back(cur->val);
                stack.push(cur->right);
                cur = cur->left;
            } else {
                cur = stack.top();
                stack.pop();
            }
        }
        return res;
    }
};