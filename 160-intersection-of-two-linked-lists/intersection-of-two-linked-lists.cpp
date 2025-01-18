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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         unordered_set<ListNode*> visited;
        
        // Traverse the first linked list and store each node in the set
        ListNode* currentA = headA;
        while (currentA) {
            visited.insert(currentA);
            currentA = currentA->next;
        }
        
        // Traverse the second linked list
        ListNode* currentB = headB;
        while (currentB) {
            // If the node is already in the set, it's the intersection
            if (visited.count(currentB)) {
                return currentB;
            }
            currentB = currentB->next;
        }
        
        // No intersection found
        return nullptr;
    }
};