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
   ListNode * push(ListNode * head,int data)
    {
        ListNode* node=new ListNode(data);
        node->next=head;
        head=node;
    
    return head;
        
}
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         ListNode * head=new ListNode();
        if(list1==NULL && list2!=NULL)
        {
            head=list2;
            return head;
        }
       
        int count=0;
        while(list1 != NULL && list2 != NULL)
        {
            if(list1->val < list2->val)
            {
                 
                head=push(head,list1->val);
                list1 = list1->next;
                count++;
            }
            else
            {
                head=push(head,list2->val);
                list2 = list2->next;
                count++;
            }
        }
    
        while(list1!=NULL)
        {
             head=push(head,list1->val);
                
                list1 = list1->next;
                count++;
            
        }
        while(list2!=NULL)
        {
             head=push(head,list2->val);
             
                list2 = list2->next;
            count++;
}
    ListNode * current=head;
    ListNode * prev=NULL;
    ListNode * forward=NULL;
    while(current!=NULL && count>0)
    {
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
        count--;
    }
        head=prev;
        return head;
        
    }
};