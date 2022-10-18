class Solution {
public:
    
    int reverse(int num)
    {
        string str=to_string(num);
        
        string s;
        
        for(int i=str.length()-1;i>=0;i--)
        {
            s.push_back(str[i]);
        }
        
        
        int sum=stoi(s);
        
        return sum;
    }
    bool sumOfNumberAndReverse(int num) {
        
        if(num==0)
            return true;
        
        for(int i=1;i<=num;i++)
        {
            if((i+reverse(i)) == num)
            {
                return true;
            }
        }
        
        return false;
    }
};