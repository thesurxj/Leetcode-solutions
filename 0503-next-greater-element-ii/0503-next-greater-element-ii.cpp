class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,-1);
        stack<int> st;
        st.push(nums[n-1]);


        for(int i=2*n-1;i>=0;i--){
            int idx= i%n;
            while(!st.empty() and st.top()<=nums[idx]){
                st.pop();
            }
            if(st.empty()) res[idx]=-1;
            else res[idx]=st.top();
            st.push(nums[idx]);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna