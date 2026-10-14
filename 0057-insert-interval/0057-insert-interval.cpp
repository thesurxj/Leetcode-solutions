class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a,
                               vector<int>& newInterval) {
        vector<vector<int>> res;
        a.push_back(newInterval);

        sort(a.begin(), a.end());

        int start1 = a[0][0];
        int end1 = a[0][1];

        for (int i = 1; i < a.size(); i++) {
            int start2 = a[i][0];
            int end2 = a[i][1];

            if (end1 >= start2) {
                start1 = min(start1, start2);
                end1 = max(end1, end2);
                continue;
            }
            res.push_back({start1, end1});
            start1 = start2;
            end1 = end2;
        }
        res.push_back({start1, end1});

        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna