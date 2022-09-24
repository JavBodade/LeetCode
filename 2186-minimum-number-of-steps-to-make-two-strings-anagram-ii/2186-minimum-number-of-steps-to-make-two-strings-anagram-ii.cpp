class Solution {
public:
    int minSteps(string s, string t) {
        
        int arr1[26]={};
        int arr2[26]={};
        
        for(int i=0;i<s.length();i++)
        {
            arr1[s[i]-'a']++;
        }
        
        for(int i=0;i<t.length();i++)
        {
            arr2[t[i]-'a']++;
        }
        
        int sum=0;
        for(int i=0;i<26;i++)
        {
            sum+=abs(arr1[i]-arr2[i]);
        }
        
        return sum;
       
        
    }
};