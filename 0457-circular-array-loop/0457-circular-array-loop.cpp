class Solution {
public:
    int getNext(vector<int>& nums, int i) {
        int n = nums.size();
        return ((i + nums[i]) % n + n) % n;
    }

    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) continue;

            bool forward = nums[i] > 0;
            int slow = i;
            int fast = i;

            while (true) {
                int nextSlow = getNext(nums, slow);
                int nextFast = getNext(nums, fast);

                if (nums[nextSlow] == 0 ||
                    (nums[nextSlow] > 0) != forward)
                    break;

                if (nums[nextFast] == 0 ||
                    (nums[nextFast] > 0) != forward)
                    break;

                int nextFastFast = getNext(nums, nextFast);

                if (nums[nextFastFast] == 0 ||
                    (nums[nextFastFast] > 0) != forward)
                    break;

                slow = nextSlow;
                fast = nextFastFast;

                if (slow == fast) {
                    if (slow == getNext(nums, slow))
                        break;

                    return true;
                }
            }

            int curr = i;

            while (nums[curr] != 0 &&
                   (nums[curr] > 0) == forward) {
                int next = getNext(nums, curr);
                nums[curr] = 0;
                curr = next;
            }
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna