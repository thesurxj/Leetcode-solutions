
class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        unordered_map<int,int> f;
        int n= arr.size();
        int sum=0;
        int res=0;

        f[0]=1;

        for(int i=0;i<n;i++){
            sum+=arr[i];
            int rem=sum%k;
            if(rem<0) rem= rem+k;

            res+=f[rem];
            f[rem]++;
        }
        return res;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna