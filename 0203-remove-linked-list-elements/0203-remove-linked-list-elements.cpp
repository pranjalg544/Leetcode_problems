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
    ListNode* removeElements(ListNode* head, int val) {

        if(head == nullptr){
            return head;
        }

        // Remove matching nodes from the beginning
        while(head != nullptr && head->val == val){
            head = head->next;
        }

        // All nodes were removed
        if(head == nullptr){
            return head;
        }

        ListNode* previous = head;
        ListNode* current = head->next;

        while(current != nullptr){

            if(current->val == val){
                previous->next = current->next;
            }
            else{
                previous = current;
            }

            current = current->next;
        }

        return head;
    }
};