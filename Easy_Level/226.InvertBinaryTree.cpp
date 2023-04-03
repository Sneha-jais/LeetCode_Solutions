

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

// void mirror(TreeNode *root){


// if(root==NULL)
//     return;

//        mirror(root->left);
//        mirror(root->right);


//         struct TreeNode *left=root->left;
//         struct TreeNode *right=root->right;
//         struct TreeNode *temp=left;
//         left=right;
//         right=temp;


// }

    TreeNode* invertTree(TreeNode* root) {

     
if(root==NULL)
    return NULL;

       invertTree(root->left);
       invertTree(root->right);


        struct TreeNode *temp=root->left;
        root->left=root->right;
        root->right=temp;
       

return root;
    }
};
