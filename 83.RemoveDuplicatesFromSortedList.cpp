/* Leetcode link:

Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
Input: head = [1,1,2]
Output: [1,2]
Input: head = [1,1,2,3,3]
Output: [1,2,3]

*/


/*Without using recursion
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;

        ListNode *temp=head;

        while(temp->next!=NULL){
            if(temp->val==temp->next->val){
                ListNode *del=temp->next;
                temp->next=del->next;
                delete del;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};
*/

//Using recursion

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode *head2=deleteDuplicates(head->next);
        if(head->val==head2->val)
            return head2;
        else{
            head->next=head2;
            return head;
        }
       
     
    }
};
