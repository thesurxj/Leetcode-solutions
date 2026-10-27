
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
        if(k<=1) return 0;

        int n = arr.size();
        int left=0;
        long long product =1;
        int count=0;

        for(int right=0;right<n;right++){
             product = product*arr[right];

             while(product>=k){
                product= product/arr[left];
                left++;
             }

             count += right-left+1;
        }
        return count;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna