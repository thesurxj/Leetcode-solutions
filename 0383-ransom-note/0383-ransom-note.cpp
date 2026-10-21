
class Solution {
public:
    bool fun(unordered_map<char, int>& have,
             unordered_map<char, int>& need) {
        for (auto i : need) {
            char c = i.first;
            int fneed = i.second;
            int fhave = have[c];

            if (fhave < fneed) {
                return false;
            }
        }
        return true;
    }

    bool canConstruct(string ransom, string magazine) {
        unordered_map<char, int> have;
        unordered_map<char, int> need;

        for (int i = 0; i < ransom.size(); i++) {
            need[ransom[i]]++;
        }

        for (int i = 0; i < magazine.size(); i++) {
            have[magazine[i]]++;
        }

        return fun(have, need);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna