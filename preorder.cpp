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

void preOrder(TreeNode* curr, vector<int> &pre) {
    if(curr == NULL) {
        return;
    }
    
	// (root, left, right) = pre-order Traversal
    pre.push_back(curr->val);
    preOrder(curr->left, pre);
    preOrder(curr->right, pre);
}

vector<int> preorderTraversal(TreeNode* root) {
    
    vector<int> pre;
    
    preOrder(root, pre);
    return pre;
}
};
