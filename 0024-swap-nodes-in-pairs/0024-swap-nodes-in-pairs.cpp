class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        int size = 2;

        if (head == nullptr) return head;

        ListNode* left = head;
        ListNode* res = nullptr;
        ListNode* prevLeft = nullptr;
        ListNode* right;

        while (left != nullptr) {
            right = left;

            for (int i = 0; i < size - 1; i++) {
                if (right == nullptr) break;
                right = right->next;
            }

            if (right == nullptr) break;

            ListNode* nextPair = right->next;

            left->next = nextPair;
            right->next = left;

            if (prevLeft != nullptr) {
                prevLeft->next = right;
            } else {
                res = right;
            }

            prevLeft = left;
            left = nextPair;
        }

        return res != nullptr ? res : head;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna