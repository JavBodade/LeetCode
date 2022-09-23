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
   
    ListNode* mergeNodes(ListNode* head) {
        
       vector<int> arr;
        ListNode* curr=head;
        ListNode* head2=NULL;
        ListNode* tail2=NULL;
       int sum=0;
        while(curr->next!=NULL)
        {
           curr=curr->next;
            sum=sum+curr->val;
            if(curr->val==0)
            {
               push(head2,tail2,sum);
                sum=0;
            }
          
        }
        
        
        
        
        
        return head2;
        
    }
};