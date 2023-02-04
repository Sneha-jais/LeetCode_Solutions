/* Leetcode link: https://leetcode.com/problems/linked-list-cycle-ii/
Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. 
Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.
Do not modify the linked list.
Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.
*/


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

     if(head==NULL || head->next==NULL){
         return NULL;
     }   
     ListNode *temp=head; //move one
     ListNode *temp2=head; //move two

while(temp2!=NULL && temp2->next!=NULL){
temp=temp->next;

temp2=temp2->next->next;

if(temp==temp2){
    break;
}

}
if(temp2==NULL || temp2->next==NULL){
    return NULL;

}
temp2=head;

while(temp!=temp2){
    temp=temp->next;
    temp2=temp2->next;
}


return temp2;
    }
};
