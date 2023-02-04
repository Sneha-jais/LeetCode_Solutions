


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
        
     ListNode *temp=head; //move by one step
     ListNode *temp2=head; //move by two step

        while(temp2!=NULL && temp2->next!=NULL){
            temp=temp->next;
            temp2=temp2->next->next;
        }

return temp;
    }
};
