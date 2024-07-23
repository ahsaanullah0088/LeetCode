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
        ListNode* fast = head;
        ListNode* med = head;
        ListNode* slow = head;
        while(n!=0){
            fast=fast->next;
            n--;
        }
        if(fast==NULL){
            head=head->next;
            return head;
        }
        while(fast!=NULL){
            slow=med;
            med=med->next;
            fast=fast->next;
        }
        slow->next=med->next;
        return head;
    }
};