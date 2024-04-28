class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ListNode* l3 = new ListNode(0);
        ListNode* l3 = new ListNode(0);

        ListNode* head = l3; // Keep track of the head of the result list
        int carry = 0;
        
        while (l1 || l2 || carry) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = sum / 10;
            l3->next = new ListNode(sum % 10);
            l3 = l3->next; // Move l3 pointer to the next node
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        
        return head->next; // Skip the dummy node
    }
};
