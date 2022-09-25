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
    ListNode* push( ListNode* & head,ListNode * &tail,int data)
    {
        ListNode* node=new ListNode(data);
        if(head==NULL)
        {
            head=node;
            tail=node;
            return head;
        }
        else
        {

             tail->next=node;
             tail=node;
        }
        
        return head;
        
        
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
       
        int carry=0;
        ListNode * head=NULL;
        ListNode * tail=NULL;
        while(l1!=NULL && l2!=NULL)
        {
            int sum=carry+l1->val+l2->val;
            int digit=sum%10;
            push(head,tail,digit);
            
            carry=sum/10;
            l1=l1->next;
            l2=l2->next;
        }
        
        while(l1!=NULL)
        {
            int sum=carry+l1->val;
            int digit=sum%10;
            head=push(head,tail,digit);
            
            carry=sum/10;
            l1=l1->next;
            
        }
         while(l2!=NULL)
        {
            int sum=carry+l2->val;
            int digit=sum%10;
            head=push(head,tail,digit);
            
            carry=sum/10;
            l2=l2->next;
            
        }
        
        while(carry!=0)
        {
           head =push(head,tail,carry);
            carry=carry/10;
        }
        
        return head;
             
        
    }
};