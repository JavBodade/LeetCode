// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
             
   if(n == 1 ) return 1;
        int left = 0;
        int right = n;
        while(left <= right){
           int middle = (left/2.0+right/2.0);
           if(!isBadVersion(middle)){
               left = middle+1;
           }else{
               right = middle-1;
           }
           
       }
       return left;
        
    }
};