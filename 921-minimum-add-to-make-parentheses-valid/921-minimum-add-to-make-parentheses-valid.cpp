class Solution {
public:
    int minAddToMakeValid(string s) {
        
      stack<char> st;
    int count=0;
    for(int i=0;i<s.length();i++)
    {    
        char c=s[i];
        if(c=='(')
        {
            st.push(c);
        }
        else if(!st.empty())
        {
             if(c==')' && st.top())
             {
                st.pop();
             }
        }
        else
        {
            count++;
        }

    }

    return count+st.size();
        
   
        
       
    }
};