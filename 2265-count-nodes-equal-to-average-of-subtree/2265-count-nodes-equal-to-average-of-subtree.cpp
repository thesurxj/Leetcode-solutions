class Solution {
public:
    int ans = 0;

    pair<int, int> solve(TreeNode* root) {
        if (root == NULL) {
            return {0, 0};
        }

        pair<int, int> left = solve(root->left);
        pair<int, int> right = solve(root->right);

        int sum = root->val + left.first + right.first;
        int count = 1 + left.second + right.second;

        if (root->val == sum / count) {
            ans++;
        }

        return {sum, count};
    }

    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna