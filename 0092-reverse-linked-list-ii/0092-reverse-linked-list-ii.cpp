class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || left == right) {
            return head;
        }

        ListNode dummy(0);
        dummy.next = head;

        ListNode* before = &dummy;

        for (int i = 1; i < left; i++) {
            before = before->next;
        }

        ListNode* start = before->next;

        for (int i = 0; i < right - left; i++) {
            ListNode* move = start->next;

            start->next = move->next;
            move->next = before->next;
            before->next = move;
        }

        return dummy.next;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna