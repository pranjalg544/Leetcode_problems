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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* odd_ptr = head;
        ListNode* even_ptr = odd_ptr->next;
        ListNode* even_head = even_ptr;
        while(even_ptr!=nullptr && even_ptr->next!=nullptr){
            odd_ptr->next=even_ptr->next;
            odd_ptr=odd_ptr->next;
            even_ptr->next=odd_ptr->next;
            even_ptr=even_ptr->next;
            
        }
        odd_ptr->next = even_head;
        return head;
    }
};