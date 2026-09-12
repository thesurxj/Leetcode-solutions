class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;

        int maxSum = nums[0];
        int curMax = nums[0];

        int minSum = nums[0];
        int curMin = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0) {
                curMax = max(nums[i], curMax + nums[i]);
                maxSum = max(maxSum, curMax);

                curMin = min(nums[i], curMin + nums[i]);
                minSum = min(minSum, curMin);
            }

            total += nums[i];
        }

        // All elements are negative
        if (maxSum < 0)
            return maxSum;

        return max(maxSum, total - minSum);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna