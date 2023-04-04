/*
Given the root of a binary tree, determine if it is a complete binary tree.
In a complete binary tree, every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible.
It can have between 1 and 2h nodes inclusive at the last level h.

 Input: root = [1,2,3,4,5,6]
Output: true
Explanation: Every level before the last is full (ie. levels with node-values {1} and {2, 3}), and all nodes in the last level ({4, 5, 6}) are as far left as possible.

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



    bool isCompleteTree(TreeNode* root) {

      
        if(root==NULL)
            return true;
       
       queue<TreeNode*>q;
       q.push(root);

        while(q.front()!=NULL){
            TreeNode *temp=q.front();
            q.pop();
            q.push(temp->left);
            q.push(temp->right);
        }

        while(!q.empty() && q.front()==NULL){
            q.pop();
        }

        if(q.empty())
            return true;
return false;
    }
};
