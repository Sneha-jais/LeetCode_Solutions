



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
