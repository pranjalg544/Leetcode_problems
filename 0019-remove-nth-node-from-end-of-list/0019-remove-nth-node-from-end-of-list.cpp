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
        if(head==nullptr) return head;
        // ListNode*ptr1=head;
        // ListNode*ptr2=head->next;
        // while(ptr2!=nullptr){
        //     if(ptr2->val=n){
        //         ptr1->next=ptr2->next;
        //     }
        //     ptr1=ptr1->next;
        //     ptr2=ptr2->next;
        // }
        // return head;
        ListNode*ptr=head;
        int count=0;
        while(ptr!=nullptr){
            ptr=ptr->next;
            count++;
        }
        if (n == count) {
            return head->next;
        }
        int curr=count-n;
        ptr = head;
        for (int i = 1; i < curr; i++) {
            ptr = ptr->next;
        }
        ptr->next = ptr->next->next;
            return head;
    }
};