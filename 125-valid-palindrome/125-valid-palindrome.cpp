class Solution {
public:
    bool isPalindrome(string s) {
        
         if(s==" ")
        {
            return true;
        }
        string s1="!@#$^&*(){}[]/.,:';""`'";
        string str="";
        string str3="";
        string str2="";
        for(int i=0;i<s.length();i++)
        {
            str3+=(char)tolower(s[i]);
            
        }
        for(int i=0;i<str3.length();i++)
        {
            if((int)str3[i]>=97 && (int)str3[i]<=122 || (int)s[i]>=48 && (int)s[i]<=57)
            {
                  str+=str3[i];
            }
          
        }
        
        for(int i=str.length()-1;i>=0;i--)
        {
                str2+=str[i];
        }        
        if(str2==str)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};