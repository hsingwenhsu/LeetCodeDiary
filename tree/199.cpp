class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        // bfs from right to left
        queue<TreeNode*> bfs;
        vector<int> rightView;
        if (!root) return rightView;
        bfs.push(root);
        while (!bfs.empty()) {
            int sz = bfs.size();
            for (int i = 0; i < sz; i++) {
                TreeNode *curr = bfs.front();
                bfs.pop();
                if (i == 0 && curr) {
                    rightView.push_back(curr->val);
                }
                // explore
                if (curr && curr->right) bfs.push(curr->right);
                if (curr && curr->left) bfs.push(curr->left);
            }
        }
        return rightView;
    }
};
