class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int ans = arr[0];
        int nodlt = arr[0];
        int onedlt = INT_MIN;

        for (int i = 1; i < n; i++) {
            int prevnodlt = nodlt;
            int prevonedlt = onedlt;

            nodlt = max(nodlt + arr[i], arr[i]);

            if (prevonedlt == INT_MIN) {
                onedlt=prevnodlt;
            } else {
                onedlt = max(prevnodlt, prevonedlt+arr[i]);
            }
            ans = max(ans, max(onedlt, nodlt));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna