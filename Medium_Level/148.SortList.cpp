/* leetcode link:

Given the head of a linked list, return the list after sorting it in ascending order.
Input: head = [4,2,1,3]
Output: [1,2,3,4]
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
    ListNode* sortList(ListNode* head) {
        vector <int> v;
        if(head==NULL){
            return head;
        }
        ListNode* temp=head;

while(temp!=NULL){
    v.push_back(temp->val);
    temp=temp->next;
}
sort(v.begin(),v.end());

temp=head;
int i=0;
while(temp)
{
    temp->val=v[i];
    i++;
    temp=temp->next;
}

return head;
    }
};
