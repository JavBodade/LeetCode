class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        vector<bool>  arr(26);
        for(int i=0;i<sentence.length();i++)
        {
            arr[sentence[i]-97]=true;
        }
        
        for(int i=0;i<26;i++)
        {
            if(arr[i] == false)
            {
                return false;
            }
        
        }
            
            return true;
        
   
    }
};