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

    int length(ListNode *head)
    {
        ListNode *cur = head;
        int size = 0;
        while(cur != NULL){
            cur = cur->next;
            size += 1;
        }

        return size;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int size = length(head);
        int pos = size - n + 1;
        if(size == 1 || pos == 1){
            head = head->next;
            return head;
        }

        ListNode *prev = head;
        
        // Now moving to the 'pos-1' th index to find the previous position
        for(int i = 2; i < pos; i++){
            prev = prev->next;
        }

        ListNode *node = prev->next;    // Moving the 'node' that we're going to remove.
        ListNode *next_node = node->next;   // Pointing it's next node.
        prev->next = next_node; // Adding link between 'prev' node and 'next_node'.

        return head;
    }
};