/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
         if(head==NULL)
        {
            return NULL;
        }
        
        ListNode * fast=head;
        ListNode * slow=head;
        ListNode * temp=NULL;
        while(fast!=NULL)
        {
            fast=fast->next;
           if(fast!=NULL)
           {
              fast=fast->next; 
           }
            slow=slow->next;
            
            if(slow == fast)
            {
                temp=slow;
                break;
            }
        }
        
        if(temp==NULL)
        {
            return NULL;
}
        slow=head;
        while(temp!=NULL)
        {
          
            if(slow==temp)
            {
                return temp;
            }
              temp=temp->next;
            slow=slow->next;
            
}
        return NULL;
        
        
    }
};