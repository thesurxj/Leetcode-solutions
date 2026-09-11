class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),bestending=0,ans=INT_MIN;

        for(int i=0;i<n;i++){
            int v1=bestending + nums[i];
            int v2= nums[i];

            bestending= max(v1,v2);

            ans= max(ans,bestending);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna