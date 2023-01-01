class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        // do inorder traversal
        vector<int> ans;
        inorder(root, ans, k);
        return ans[k - 1];
    }

    void inorder(TreeNode *root, vector<int> &ans, int &k) {
        if (!root || ans.size() == k) return;
        if (root && root->left) inorder(root->left, ans, k);
        ans.push_back(root->val);
        if (root && root->right) inorder(root->right, ans, k);
    }
};
