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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0)
        {
            return NULL;    
        }
        
        int ind=-1;
        int maxval=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxval)
            {
                maxval=nums[i];
                ind=i;
            }
        }
        vector<int>myvl;
        vector<int>myvr;
        for(int i=0;i<=ind-1;i++)
        {
            myvl.push_back(nums[i]);
        }
        for(int i=ind+1;i<nums.size();i++)
        {
            myvr.push_back(nums[i]);
        }
        TreeNode*root=new TreeNode(maxval);
        TreeNode*leftpart=constructMaximumBinaryTree(myvl);
        TreeNode*rightpart=constructMaximumBinaryTree(myvr);
        root->left=leftpart;
        root->right=rightpart;
        return root;
        
        
    }
};