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
    
    int height(TreeNode *p)
    {
        if(p == NULL)
            return 0;
        int x = height(p->left)+1;
        int y = height(p->right)+1;
        return max(x,y);
    }
    
    void preorder(TreeNode *p ,vector<int> &v)
    {
        if(p)
        {
            int x = 0 , y = 0;
            if(p->left)
            x = height(p->left);
            if(p->right)
            y = height(p->right);
            v.push_back(x+y);
            preorder(p->left,v);
            preorder(p->right,v);
            
        }
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root == NULL)
            return 0;
        
        vector<int> v;
        preorder(root,v);
        sort(v.begin(),v.end(),greater<int>());
        
        return v[0];
        
    }
    
    
    
};
