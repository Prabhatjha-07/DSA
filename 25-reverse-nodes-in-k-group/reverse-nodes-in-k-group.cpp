class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* newHead = nullptr;
        ListNode* groupPrev = nullptr;

        while (curr != nullptr) {

            ListNode* temp = curr;
            int count = 0;

            while (temp != nullptr && count < k) {
                temp = temp->next;
                count++;
            }

            if (count < k) {
                break;
            }

            ListNode* groupStart = curr;

            prev = nullptr;
            count = 0;

            while (count < k) {
                ListNode* next = curr->next;

                curr->next = prev;
                prev = curr;
                curr = next;

                count++;
            }

            if (newHead == nullptr) {
                newHead = prev;
            }

            if (groupPrev != nullptr) {
                groupPrev->next = prev;
            }

            groupStart->next = curr;

            groupPrev = groupStart;
        }

        return newHead;
    }
};