class Solution {
public:
    
    string reverse(string& str)
    {
        int i=0;
        int j=str.length()-1;
        
        while(i<=j){
            char t=str[i];
            str[i]=str[j];
            str[j]=t;
            i++;
            j--;
        }
        
        return str;
    }
    
    string reverseWords(string s) {
        
        string str;
        string ans="";
        int index=0;
        for(int i=0;i<s.length();i++)
        {   
            if(s[i]==' ')
            {
                ans=ans+reverse(str);
                index=i;
                break;
            }else
            {
                str.push_back(s[i]);
            }
        }
        if(index==0)
        {
            return reverse(s);
        }
        
        str="";
        for(int i=index+1;i<s.length();i++)
        {
            
            if(s[i]==' ')
            {
                    ans=ans+" "+reverse(str);
                    str="";
            }
            else
            {
            str.push_back(s[i]);
                
            }
          
        }
        
        str="";
        
        for(int i=s.length()-1;i>0;i--)
        {
           
            if(s[i]==' ')
            {
               ans=ans+" "+str;
                break;
            }else
            {
             str.push_back(s[i]);
            }
        }
        
        
        return ans;
     
        
    
        
        
    }
};