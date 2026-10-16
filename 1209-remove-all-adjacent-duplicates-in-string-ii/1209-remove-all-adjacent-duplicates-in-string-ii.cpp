
class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> st;

        for (char c : s) {
            if (!st.empty() && st.back().first == c) {
                st.back().second++;
            } else {
                st.push_back({c, 1});
            }

            if (st.back().second == k) {
                st.pop_back();
            }
        }

        string res;
        for (auto [ch, count] : st) {
            res.append(count, ch);
        }

        return res;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna