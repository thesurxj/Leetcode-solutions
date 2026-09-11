class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(),maxending=nums[0],minending=nums[0],ans=nums[0];

        for(int i=1;i<n;i++){
            int v1=nums[i];
            int v2= maxending*nums[i];
            int v3= minending*nums[i];

            maxending=max(v1,max(v2,v3));
            minending=min(v1,min(v2,v3));

            ans=max(ans,max(minending,maxending));
        }
        return ans; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna