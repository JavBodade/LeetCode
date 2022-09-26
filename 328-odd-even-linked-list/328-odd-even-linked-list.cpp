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
     ListNode* push( ListNode* head,int data)
     {
          ListNode* node=new ListNode(data);
          node->next=head;
         head=node;
         
         return head;
     }
    
    ListNode* oddEvenList(ListNode* head) {
        
       ListNode* temp=head;
       ListNode* head2=new ListNode(0);
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        
        int i=1;
        while(temp!=NULL)
        {
            if(i%2!=0)
            {
                head2=push(head2,temp->val);
            }
            i++;
            temp=temp->next;
        }
        
        i=1;
        temp=head;
         while(temp!=NULL)
        {
            if(i%2==0)
            {
                head2=push(head2,temp->val);
            }
            i++;
            temp=temp->next;
        }
        
        ListNode* current=head2;
        ListNode* prev=NULL;
        ListNode* forward=NULL;
        while(current!=NULL && i-1>0)
        {
            forward=current->next;
            current->next=prev;
            prev=current;
            current=forward;
            i--;
        }
        head2=prev;
        
        return head2;
        
    }
};