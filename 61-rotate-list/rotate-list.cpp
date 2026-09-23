class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }

        ListNode* temp = head;
        int length = 1;

        while (temp->next != nullptr) {
            temp = temp->next;
            length++;
        }

        k = k % length;

        if (k == 0) {
            return head;
        }

        temp->next = head;

        int count = 0;
        temp = head;

        while (count < length - k - 1) {
            temp = temp->next;
            count++;
        }

        ListNode* curr = temp->next;

        temp->next = nullptr;

        return curr;
    }
};