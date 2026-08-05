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
        if(!head || !head->next)
        {
            return head;
        }
        ListNode* first=head;
        ListNode* second=head->next;
        while(second)
        {
            if(first->val==second->val)
            {
                ListNode* temp=second;
                second=second->next;
                first->next=second;
                delete temp;
            }
            else
            {
                first=first->next;
                second=second->next;
            }
        }
        return head;
    }
};