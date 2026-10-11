
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int sum = 0;
        int ans = 0;

        for (int x : nums) {
            sum += x;

            int rem = sum % k;

            // Handle negative remainders
            if (rem < 0) {
                rem += k;
            }

            ans += mp[rem];

            mp[rem]++;
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna