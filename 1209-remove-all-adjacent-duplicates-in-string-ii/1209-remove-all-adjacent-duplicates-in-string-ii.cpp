class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;

        for (char c : s) {
            if (!st.empty() && st.top().first == c) {
                st.top().second++;
            } else {
                st.push({c, 1});
            }

            if (st.top().second == k) {
                st.pop();
            }
        }

        string res = "";

        while (!st.empty()) {
            res += string(st.top().second, st.top().first);
            st.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna