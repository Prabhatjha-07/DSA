/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        ListNode* temp = fast;
        ListNode* prev = nullptr;

        while (true) {
            ListNode* next = fast->next;
            fast->next = slow;

            slow->next = next;
            if (prev != nullptr) {
                prev->next = fast;
            }
            prev = slow;

            if (next == nullptr || next->next == nullptr) {
                break;
            }

            slow = next;
            fast = next->next;
        }

        return temp;
    }
};