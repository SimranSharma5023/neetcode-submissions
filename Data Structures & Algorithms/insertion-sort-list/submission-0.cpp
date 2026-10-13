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
        if (!head || !head->next) {
            return head;
        }
        for(ListNode*current=head->next; current; current=current->next){
            for(ListNode*temp=head; temp != current; temp=temp->next){
                if(temp->val>current->val){
                    swap(temp->val, current->val);
                }
            }
        }
        return head;
    }
};










 