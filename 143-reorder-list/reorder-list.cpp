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
    void reorderList(ListNode* head) {
        stack<ListNode*> s;
        ListNode* curr = head;
        while(curr){
            s.push(curr);
            curr = curr->next;
        }
        int n = s.size();
        if(n < 2) return;
        curr = head;
        ListNode* nextStackPtr;
        for(int i = 0; i < n/2; i++){
            nextStackPtr = curr->next;
            curr->next = s.top();
            s.pop();
            curr = curr->next;
            curr->next = nextStackPtr;
            curr = curr->next;
        }
        curr->next = nullptr;
    }
};