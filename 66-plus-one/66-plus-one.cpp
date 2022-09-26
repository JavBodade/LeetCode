class Solution {
public:
    void reverse(vector<int>& nums)
    {
        int low=0;
        int high=nums.size()-1;
        while(low<high)
        {
            int temp=nums[low];
            nums[low]=nums[high];
            nums[high]=temp;
            
            low++;
            high--;
        }
    }
    vector<int> plusOne(vector<int>& digits) {
        
       vector<int> ans;
        
        int carry=0;
        int index=0;
        int i=digits.size()-1;
        while(i>=0)
        {
            int sum=0;
            int rem=digits[i]%10;
            
            if(i==digits.size()-1)
            {
              sum+=rem+carry+1;
            }
            else
            {
                sum+=rem+carry;
            }
            
            int digit=sum%10;
            
            carry=sum/10;
            
            ans.push_back(digit);
            
            
            i--;
        }
        
        while(carry!=0)
        {
            ans.push_back(carry);
            carry/=10;
        }
        reverse(ans);
        
        return ans;
        
    }
};