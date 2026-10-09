
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = 0;
        int maxEnding = 0, minEnding = 0;
        int maxSum = nums[0], minSum = nums[0];

        for (int x : nums) {
            totalSum += x;

            maxEnding = max(x, maxEnding + x);
            maxSum = max(maxSum, maxEnding);

            minEnding = min(x, minEnding + x);
            minSum = min(minSum, minEnding);
        }

        if (maxSum < 0)
            return maxSum;

        return max(maxSum, totalSum - minSum);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna