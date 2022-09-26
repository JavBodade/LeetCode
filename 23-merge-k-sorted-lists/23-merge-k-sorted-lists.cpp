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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int> ans;
        ListNode * head=new ListNode(0);
        for(int i=0;i<lists.size();i++)
        {
           ListNode * node=lists[i];
            while(node!=NULL)
            {
                ans.push_back(node->val);
                node=node->next;
            }
           
            
        }
        int count=0;
       sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            head=push(head,ans[i]);
            count++;
        }
        
        ListNode * current=head;
        ListNode * prev=NULL;
        ListNode* forward=NULL;
        
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