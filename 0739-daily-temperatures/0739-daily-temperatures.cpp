class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        int n = a.size();
        stack<int> st;
        vector<int> res(n);

        res[n - 1] = 0;
        st.push(n - 1);

        for (int i = n - 2; i >= 0; i--) {
            while (!st.empty() and a[st.top()] <= a[i]) {
                st.pop();
            }
            if (st.empty())
                res[i] = 0;
            else
                res[i] = st.top() - i;

            st.push(i);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna