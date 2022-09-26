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
    void push(ListNode* & head,ListNode* & tail,int data)
    {
        ListNode* node=new ListNode(data);
        if(head==NULL)
        {
            head=node;
            tail=node;
            tail->next=NULL;
        }
        else
        {
            tail->next=node;
            tail=node;
            node->next=NULL;
        }
    }
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* head2=NULL;
        ListNode* tail2=NULL;
        ListNode* temp=head;
        
        
        while(temp!=NULL)
        {
            if(temp->val < x)
            {
                push(head2,tail2,temp->val);
            }
            temp=temp->next;
        }
        
        temp=head;
         while(temp!=NULL)
        {
            if(temp->val >= x)
            {
                push(head2,tail2,temp->val);
            }
            temp=temp->next;
        }
        
        return head2;
        
    }
};