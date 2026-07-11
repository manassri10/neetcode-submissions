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
    int dia = 0;
    int height(TreeNode *root)
    {
       if(root == NULL)
       {
        return 0;
       }

       int heightL = height(root->left);
       int heightR =  height(root->right);

       dia = max(dia , heightL + heightR);
       return 1 + max(heightL , heightR);

    }
    int diameterOfBinaryTree(TreeNode* root) {

       int h=  height(root);
       return dia;

    }
};
