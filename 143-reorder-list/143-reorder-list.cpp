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
    void reorderList(ListNode* head) {
         vector<int> v;
        
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        
        int i=0;
        int j=v.size()-1;
        temp=head;
        while(i<j)
        {
            temp->val=v[i];
            temp=temp->next;
            temp->val=v[j];
            temp=temp->next;
            
            i++;
            j--;
            
        }
        if(v.size()%2!=0)
        {
            temp->val=v[v.size()/2];
        }
        
        head=temp;
        
    }
};