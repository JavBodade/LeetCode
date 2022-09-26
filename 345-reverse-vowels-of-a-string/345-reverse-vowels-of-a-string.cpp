class Solution {
public:
     bool isVowel(char c)
    {
        if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u'|| c=='A' || c=='E' || c=='I'  
          || c=='O' || c=='U')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    string reverseVowels(string& s) {
        
        int i=0;
        int j=s.length()-1;
        
        // string str="";
        while(i<j)
        {
            if(!isVowel(s[i]))
            {
               i++;
            }
            
            if(!isVowel(s[j]))
            {
                j--;
            }
            if(isVowel(s[i]) && isVowel(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
           
            
        }
     
        
        return s;
         
    }
};