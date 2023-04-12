


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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        	vector<vector<int>> result;
    	
    	if(root==NULL)
    	    return result;
    	    
    	queue<TreeNode*> q;
    	q.push(root);
    	
    	bool flag=true; //leftToRight
    	
    	while(!q.empty()){
    	    
    	    int size=q.size();
    	    vector<int>ans(size);
    	    
    	    for(int i=0;i<size;i++){
    	        TreeNode *temp=q.front();
    	        
    	        q.pop();
    	        
    	        int idx=(flag) ? i : (size-1-i);
    	        
    	        ans[idx]=temp->val;
    	        
    	        if(temp->left){
    	            q.push(temp->left);
    	        }
    	         if(temp->right){
    	            q.push(temp->right);
    	        }
    	        
    	    }
    	    
    	    flag=!flag;
    	      	   
    	    result.push_back(ans);
    	
    	    
    	}
    	
    	return result;
    }
};
