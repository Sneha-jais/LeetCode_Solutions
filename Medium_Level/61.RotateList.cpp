/*
Given the head of a linked list, rotate the list to the right by k places.
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]

Input: head = [0,1,2], k = 4
Output: [2,0,1]
*/

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

int length(ListNode *head){
    int count=0;
    while (head!=NULL){
        count++;
        head=head->next;
       }
    return count;
    
}
ListNode *findtail(ListNode *head){
    
    while (head->next!=NULL){
               head=head->next;
       }
    return head;
    
}

    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || !head->next || k==0)
                return head;

        ListNode *tail=findtail(head);
        int l=length(head);

        tail->next = head;

          int t = l - k % l;

    for (int i = 0; i < t; ++i)
      tail = tail->next;
    ListNode* newHead = tail->next;
    tail->next = nullptr;

    return newHead;

    }
};
