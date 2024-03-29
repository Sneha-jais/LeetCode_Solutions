/* Leetcode link: https://leetcode.com/problems/binary-tree-level-order-traversal/
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).
Input: root = [3,9,20,null,null,15,7]

Output: [[3],[9,20],[15,7]]
*/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

      if (root == nullptr)
      return {};

    vector<vector<int>> ans;
    queue<TreeNode*> q{{root}};

    while (!q.empty()) {
      vector<int>temp;
      for (int sz = q.size(); sz > 0; --sz) {
        TreeNode* node = q.front();
        q.pop();
        temp.push_back(node->val);
        if (node->left)
          q.push(node->left);
        if (node->right)
          q.push(node->right);
      }
      
      ans.push_back(temp);
    }

    return ans;

    }
};
