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
    
    void reverse(ListNode* & head)
    {
      ListNode* curr=head;
      ListNode* prev=NULL;
      ListNode* forward=NULL;
        
        while(curr!=NULL)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        head=prev;
    }
    
    void push(ListNode*& head,ListNode*& tail,int data)
    {
       
        ListNode* node=new ListNode(data);
        if(head==NULL)
        {
            head=node;
            tail=node;
            node->next=NULL;
            
        }
        else
        {
            tail->next=node;
            tail=node;
            node->next=NULL;
        }
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
         if(head->next==NULL)
        {
            return head;
        }
        
       int i=1;
       
       ListNode* temp=head;
       ListNode* head2=NULL;
       ListNode* tail2=NULL;
        while(i<left)
        {
            temp=temp->next;
            i++;
        }
       

        i=left;
        while(i<=right)
        {
            push(head2,tail2,temp->val);
            i++;
            temp=temp->next;
        }
         
        reverse(head2);
       ListNode* temp2=head2;
        
        temp=head;
        int j=1;
        while(j<left)
        {
            temp=temp->next;
            j++;
        }

       temp2=head2;

       while(j<=right)
       {
         temp->val=temp2->val;
         temp=temp->next;
         temp2=temp2->next;
         j++;
       }


        
  
      
        
        return head;
      
        
        
        
    }
};