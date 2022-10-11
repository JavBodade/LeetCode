class Solution {
public:
    
    vector<int> nextSmaller(vector<int> heights)
    {
        vector<int> ans(heights.size());
        stack<int> st;
        st.push(-1);
        for(int i=heights.size()-1;i>=0;i--)
        {
            int curr=heights[i];
            while(st.top()!=-1 && heights[st.top()] >= curr)
            {
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
            
        }
        
        return ans;
    }
    
     vector<int> prevSmaller(vector<int> heights)
    {
        vector<int> ans(heights.size());
        stack<int> st;
         st.push(-1);
        for(int i=0;i<heights.size();i++)
        {
            int curr=heights[i];
            while(st.top()!=-1 && heights[st.top()] >= curr)
            {
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
            
        }
        
        return ans;
    }
    
    
    int largestRectangleArea(vector<int>& heights) {
        
        vector<int> next=nextSmaller(heights);
        vector<int> prev=prevSmaller(heights);
        int area=INT_MIN;
        for(int i=0;i<heights.size();i++)
        {
            int height=heights[i];
            if(next[i]==-1)
            {
                next[i]=heights.size();
            }
            int breadth=next[i]-prev[i]-1;
            
            int maxarea=height*breadth;
            area=max(maxarea,area);
        }
        
        return area;
        
    }
};