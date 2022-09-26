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
     void push(ListNode * &tail,int data)
    {
        ListNode * node=new ListNode(data);
        tail->next=node;
        node->next=NULL;
        tail=node;
        
    }
    
    ListNode* removeElements(ListNode* head, int val) {
        
       
        ListNode * head2=new ListNode(0);
        ListNode * tail2=head2;
        ListNode * temp=head;
        
        int i=0;
        while(temp!=NULL)
        {
            if(temp->val==val)
            {
                
            }
            else
            {
                push(tail2,temp->val);
            }
            
            temp=temp->next;
        }
        
        head=head2->next;
        return head;
        
        
        
    }
};