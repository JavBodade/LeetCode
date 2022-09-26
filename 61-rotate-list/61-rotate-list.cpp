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
    int getlength(ListNode * head)
    {
        int len=0;
        while(head!=NULL)
        {
            len++;
            head=head->next;
        }
        
        return len;
    }
    ListNode* rotateRight(ListNode* &head, int k) {
        
        int i=getlength(head);
      
        int j=0;
        ListNode * temp=head;
        if(i<=1)
        {
      
            return head;
        }
        
        k=k%i;
      
    
    while(j<k)
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        int x=temp->val;
      
        int len=1;
        temp=head;
        while(len<i-1)
        {
            temp=temp->next;
            len++;
        }
        temp->next=NULL;

        ListNode * p = new ListNode(x);
        p->next=head;
        head=p;

        j++;
    }

    return head;
        
    }
};