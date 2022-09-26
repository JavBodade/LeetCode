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
    
        
        ListNode* swapPairs(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        
        int j=0;
        for(int i=0;i<v.size();i+=2)
        {
            if(i>=v.size()-1)
            {
                break;
            }
            else
            {
                j=i+1;
                swap(v[i],v[j]);

            }
            
        }
        
        
        temp=head;
        int index=0;
        while(temp!=NULL)
        {
           temp->val=v[index];
            index++;
            temp=temp->next;
        }
        
        return head;
        
        
        
    
    }
};