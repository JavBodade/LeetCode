class Solution {
public:
    int addDigits(int num) {
        
         if(num==0)
        {
            return 0;
        }
        
        if(num<10)
        {
            return num;
        }
        int sum=0;
        
        while(num>0)
        {
            sum+=num%10;
            num/=10;
        }
        
        if(sum>=10)
        {
            return addDigits(sum);
        }
        else
        {
            return sum;
        }
        
    }
};