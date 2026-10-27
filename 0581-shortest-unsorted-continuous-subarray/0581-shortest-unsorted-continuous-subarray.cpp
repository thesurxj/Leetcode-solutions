class Solution {
public:
    int findUnsortedSubarray(vector<int>& arr) {
        vector<int> sorted= arr;
        sort(sorted.begin(),sorted.end());

        int n=arr.size();
        int left=0;
        int right= n-1;

        while(left<n and sorted[left]==arr[left]){
            left++;
        }
        if(left==n) return 0;

        while(right>=0 and sorted[right]==arr[right]){
            right--;
        }

        return right-left+1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna