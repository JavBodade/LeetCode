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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int x=getlength(head);
        int length=x-n;
        if(x==1 && n==1)
        {
          head=NULL;
            return head;
        }
        if(length==0)
        {
            head=head->next;
            return head;
        }
        ListNode * current=head;
        ListNode * del=head->next;
        int i=0;
        while(i<length-1)
        {
            current=current->next;
            del=del->next;
            
            i++;
        }
        current->next=del->next;
        // free(del);
        
        return head;
    }
};