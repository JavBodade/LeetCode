class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            if(c=='(')
            {
               st.push(c); 
            }
            else if(c==')' && st.top()=='(' && !st.empty())
            {
                int j=i-1;
                int k=i-1;
                
                while(s[k]!='(')
                {
                    k--;
                }
                s[k]='0';
                k=k+1;
                while(k<=j)
                {
                    char ch=s[j];
                    s[j]=s[k];
                    s[k]=ch;
                    k++;
                    j--;
                }
                
                st.pop();
            }
        }
        
        string str="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]==')' || s[i]=='0')
            {
                continue;
            }
            else
            {
                str.push_back(s[i]);
            }
        }
        
        return str;
        
        
    }
};