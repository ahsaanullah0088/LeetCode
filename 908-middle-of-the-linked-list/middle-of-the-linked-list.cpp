class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        int count=0;
        while(temp){
            temp = temp->next;
            count++;
        }
       for(int i=0;i<count/2;i++){
                head = head->next;
            }
            return head;
    }
};