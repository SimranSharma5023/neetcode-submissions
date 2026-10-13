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
    ListNode* mergeTwoLists(ListNode* List_1, ListNode* List_2) {
        ListNode dummy(0);
        ListNode*tail=&dummy;
        
       while (List_1 != nullptr && List_2 != nullptr){
            if(List_1->val <= List_2->val){
                tail->next=List_1;
                List_1=List_1->next;
            }else{
                tail->next=List_2;
                List_2=List_2->next;
            }
            tail=tail->next;
        }
        tail->next=(List_1 != nullptr)?List_1:List_2;
        return dummy.next;
    }
};