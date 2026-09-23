class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* temp = head;
        ListNode* prev = nullptr;

        int length = 1;
        while (temp->next != nullptr) {
            prev = temp;
            temp = temp->next;
            length++;
        }

        k = k % length;

        ListNode* lastNode = temp;
        ListNode* curr = head;
        int count = 0;

        while (count < k) {
            lastNode->next = curr;
            prev->next = nullptr;

            curr = lastNode;
            head = curr;

            temp = head;
            prev = nullptr;

            while (temp->next != nullptr) {
                prev = temp;
                temp = temp->next;
            }

            lastNode = temp;
            count++;
        }

        return head;
    }
};