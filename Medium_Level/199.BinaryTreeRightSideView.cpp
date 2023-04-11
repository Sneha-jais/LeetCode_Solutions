/*
Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.
Input: root = [1,2,3,null,5,null,4]
Output: [1,3,4]

Input: root = [1,null,3]
Output: [1,3]

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

vector <int> right(TreeNode *root, vector<int> &ans,int level){

    if(root==NULL)
        return ans;
    if(level==ans.size()){
ans.push_back(root->val);
         }
    
    right(root->right,ans,level+1);
    right(root->left,ans,level+1);
    
return ans;

}

    vector<int> rightSideView(TreeNode* root) {
        
        vector<int>ans;

        right(root,ans,0);
        
return ans;

    }
};
