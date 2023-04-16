/* Leetcode link: https://leetcode.com/problems/binary-tree-preorder-traversal/
Given the root of a binary tree, return the preorder traversal of its nodes' values.
Input: root = [1,null,2,3]
Output: [1,2,3]

Input: root = []
Output: []
*/


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
void func(TreeNode *root, vector<int> &ans){
      if(root==NULL){
          return;
      }
  ans.push_back(root->val);

  func(root->left,ans);
   func(root->right,ans);

}
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> ans;
         if(root==NULL)
            return ans;
       
       func(root,ans);
return ans;
           }
};
