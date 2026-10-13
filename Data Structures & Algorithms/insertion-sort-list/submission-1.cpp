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
    ListNode* insertionSortList(ListNode* head){
        ListNode*dummy=new ListNode(0,head);
        ListNode*prev=head;
        ListNode*current=head->next;
        while(current){
            if(current->val>=prev->val){
                prev=current;
                current=current->next;
                continue;
            }
            ListNode*temp=dummy;
            while(temp->next->val<current->val){
                temp=temp->next;
            }
            prev->next=current->next;
            current->next=temp->next;
            temp->next=current;
            current=prev->next;
        }
        return dummy->next;
    }
};