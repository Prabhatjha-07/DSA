/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    //  unordered_set<ListNode*> visited;
    //     ListNode* current = head;
        
    //     while(current != nullptr){
    //         if(visited.count(current)){
    //            return current;
    //         }
    //         visited.insert(current);
    //         current = current -> next;
    //     }
    //     return nullptr;

    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != nullptr && fast -> next != nullptr){
        slow = slow -> next ;
        fast = fast -> next -> next;
        if(slow == fast ){
           slow = head;

           while(slow != fast){
            slow = slow -> next;
            fast  = fast -> next;
           }
           return slow ;
        }
    }
    return nullptr;
        
    }
};