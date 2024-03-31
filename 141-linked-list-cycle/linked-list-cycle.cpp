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
    bool hasCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr){
            return false;
        }
        ListNode *oneJump = head;
        ListNode *twoJump = head->next;
        while(twoJump && twoJump->next){
            if(twoJump == oneJump){
                return true;
            }
            twoJump = twoJump->next->next;
            oneJump = oneJump->next;
        }
        return false;
    }
};