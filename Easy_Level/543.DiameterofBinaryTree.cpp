/* Leetcode link: https://leetcode.com/problems/diameter-of-binary-tree/description/
Given the root of a binary tree, return the length of the diameter of the tree.
The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
The length of a path between two nodes is represented by the number of edges between them.
Input: root = [1,2,3,4,5]
Output: 3
Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].

Input: root = [1,2]
Output: 1
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


//METHOD 1:
/*
class Solution {

int height(TreeNode *root){
    if(root==NULL)
        return 0;

    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
int ans= max(leftHeight,rightHeight)+1;
return ans;

}
public:
int diameterOfBinaryTree(TreeNode* root) {


     if(root==NULL)
        return 0;

       int op1=diameterOfBinaryTree(root->left);
       int op2=diameterOfBinaryTree(root->right);
       int op3=height(root->left)+height(root->right);

       int ans=max(op1,max(op2,op3));
       return ans;

    }
};
*/



//METHOD 2:


class Solution {
    
pair<int,int>dh(TreeNode *root){

if(root==NULL){
    pair<int,int> p=make_pair(0,0);
    return p;
}
pair<int,int>left=dh(root->left);
pair<int,int>right=dh(root->right);

int op1=left.first; //diameter from only left
int op2=right.first; //diameter from only right
int op3=left.second+right.second; //diameter will be from both left and right

pair<int,int> ans;
ans.first=max(op1,max(op2,op3));    //diameter
ans.second=max(left.second,right.second)+1; //height
return ans;
}

public:
int diameterOfBinaryTree(TreeNode* root) {

return dh(root).first;
    
      }
    
};
