/* Leetcode link: https://leetcode.com/problems/boundary-of-binary-tree/
GFG link: https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1
Given a Binary Tree, find its Boundary Traversal. The traversal should be in the following order: 
Left boundary nodes: defined as the path from the root to the left-most node ie- the leaf node you could reach when you always travel preferring the left subtree over the right subtree. 
Leaf nodes: All the leaf nodes except for the ones that are part of left or right boundary.
Reverse right boundary nodes: defined as the path from the right-most node to the root. 
The right-most node is the leaf node you could reach when you always travel preferring the right subtree over the left subtree. Exclude the root from this as it was already included in the traversal of left boundary nodes.
Input:
        1 
      /   \
     2     3  
    / \   / \ 
   4   5 6   7
      / \
     8   9
   
Output: 1 2 4 8 9 6 7 3

*/

/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */



class Solution {
public:

        void left1(Node *root,vector<int>&ans){
            
            if(!root)
                return;
            if(!root->left && !root->right)
                return;
            ans.push_back(root->data);
            if(root->left)
                left1(root->left,ans);
            else{
                left1(root->right,ans);
            }
            
        }

 void leaf1(Node *root,vector<int>&ans){
            if(!root)
                return;
            
             if(!root->left && !root->right){
                  ans.push_back(root->data);
                  return;
             }
             
            leaf1(root->left,ans);
            leaf1(root->right,ans);
        }
        
        
         void right1(Node *root,vector<int>&ans){
         if(!root)
                return;
            if(!root->left && !root->right)
                return;
                

            if(root->right)
               right1(root->right,ans);
            else{
                right1(root->left,ans);
            }
            
                  ans.push_back(root->data);
        
            
        }
        
        
        
        
    vector <int> boundary(Node *root)
    {
        //Your code here
        //left,leaf,right
        vector<int>ans;
        if(root==NULL)
            return ans;
        
        ans.push_back(root->data);
        left1(root->left,ans);
        leaf1(root->left,ans);
        leaf1(root->right,ans);
        right1(root->right,ans);
        return ans;
    }
};

