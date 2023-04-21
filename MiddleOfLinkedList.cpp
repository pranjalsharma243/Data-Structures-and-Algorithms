class Solution {
public:
    ListNode* middleNode(ListNode*& head) {

        ListNode* slow=head;
        ListNode* fast=head;
        while(slow!=NULL && fast!=NULL)
        {
           fast=fast->next;
           if(fast!=NULL)
           {
               fast=fast->next;
               slow=slow->next;
           }



        }
        return slow;
    }
};
