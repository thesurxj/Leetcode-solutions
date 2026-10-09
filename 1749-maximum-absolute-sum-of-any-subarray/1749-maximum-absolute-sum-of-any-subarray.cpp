
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxEnding = 0;
        int minEnding = 0;
        int maxSum = 0;
        int minSum = 0;

        for (int x : nums) {
            maxEnding = max(x, maxEnding + x);
            minEnding = min(x, minEnding + x);

            maxSum = max(maxSum, maxEnding);
            minSum = min(minSum, minEnding);
        }

        return max(maxSum, abs(minSum));
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna