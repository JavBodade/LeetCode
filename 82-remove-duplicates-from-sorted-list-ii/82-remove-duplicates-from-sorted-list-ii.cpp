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
    void push(ListNode* &head,ListNode* &tail,int data)
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
   
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return head;
            
        }
        
      
        map<int,int> mp;
        
        ListNode * temp=head;
    
        
        while(temp!=NULL)
        {
           mp[temp->val]++;
            temp=temp->next;
        }
        
        temp=head;
        
        ListNode * head2=NULL;
        ListNode * tail=NULL;
        
       while(temp!=NULL)
       {
          if(mp[temp->val]==1)
          {
              push(head2,tail,temp->val);
          }
           temp=temp->next;
       }
       
        
        return head2;
    }
};