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
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int level = 1;
        while(q.size()>0){
            int n = q.size();
        for(int i=0;i<n;i++){
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left==NULL && curr->right==NULL){
                return level;
            }if(curr->left!=NULL){
                q.push(curr->left);
            }if(curr->right!=NULL){
                q.push(curr->right);
            }
        }level++;
    }return level;
    }
};