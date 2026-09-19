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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if (head == nullptr) return head;

        ListNode* temp1 = head;
        ListNode* temp2 = head->next;

        ListNode* dummyHead = new ListNode(-1);
        ListNode* curr = dummyHead;

        while (temp2 != nullptr) {

            if (temp1->val != temp2->val) {
                ListNode* newNode = new ListNode(temp1->val);

                curr->next = newNode;
                curr = curr->next;
            }

            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        curr->next = new ListNode(temp1->val);

        return dummyHead->next;
    }
};