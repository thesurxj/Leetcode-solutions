
class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int left=0,sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }

        for(int i=0;i<arr.size();i++){
            int right=sum-left-arr[i];

            if(left==right){
                return i;
            }
            left+=arr[i];

        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna