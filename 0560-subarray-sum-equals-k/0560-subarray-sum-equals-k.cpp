class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int sum=0;
        int res=0;
        unordered_map<int,int>f;
        f[0]=1;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            int ques=sum-k;
            int freq=f[ques];

            res+=freq;
            f[sum]++;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna