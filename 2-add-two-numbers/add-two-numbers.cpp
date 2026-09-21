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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        ListNode* fast = l1;
        ListNode* slow = l2;
        int carry = 0;

        while (fast != nullptr || slow != nullptr || carry != 0) {
            int sum = carry;
            if (fast != nullptr) {
                sum += fast->val;
                fast = fast->next;
            }

            if (slow != nullptr) {
                sum += slow->val;
                slow = slow->next;
            }

            carry = sum / 10;
            sum = sum % 10;

            curr->next = new ListNode(sum);
            curr = curr->next;
        }

        if (carry != 0) {
            curr->next = new ListNode(carry);
        }
        return dummy->next;
    }
};