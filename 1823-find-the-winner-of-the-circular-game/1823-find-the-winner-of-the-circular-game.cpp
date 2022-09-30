#include <vector>
class Solution {
public:
    
    int solve(vector<int> arr,int k)
    {
        int no=0;
       while(arr.size()!=1)
       {
            no=(no+k-1)%(arr.size());
          arr.erase(arr.begin()+no);
       }
        
        return arr[0];
        
    }
    int findTheWinner(int n, int k) {
        
        vector<int> arr;
        
        for(int i=1;i<=n;i++)
        {
            arr.push_back(i);
        }
        
        int ans=solve(arr,k);
        
        return ans;
      
        
    }
};