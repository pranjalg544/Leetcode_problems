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
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        ListNode*ptr = head;
        int count =0;
        while(ptr!=nullptr){
            ptr=ptr->next;
            count++;
        }
        ptr = head;
        for (int i = 0; i < count / 2; i++) {
            ptr = ptr->next;
        }

        return ptr;
    }
};