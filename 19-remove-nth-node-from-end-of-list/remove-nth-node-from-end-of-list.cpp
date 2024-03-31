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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode dummy(0);
        dummy.next = head;
        ListNode *aheadPtr = &dummy;
        ListNode *prevPtr = &dummy;
        int i = 0;
        while(i < n){
            aheadPtr = aheadPtr->next;
            i++;
        }
        while(aheadPtr->next != nullptr){
            aheadPtr = aheadPtr->next;
            prevPtr = prevPtr->next;
        }

        prevPtr->next = prevPtr->next->next;
        return dummy.next;
    }
};