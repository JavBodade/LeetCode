class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
         int arr[m+n];
         int index1=0;
        int index2=0;
        int index3=0;
        if(m==0 && n>0)
        {
            nums1.clear();
            for(int i=0;i<n;i++)
            {
                nums1.push_back(nums2[i]);
            }
        }
        
        if(m>0 && n>0)
        {
       
        while(index1<m && index2<n)
        {
            if(nums1[index1]<nums2[index2])
            {
                arr[index3]=nums1[index1];
                index3++;
                index1++;
            }
            else
            {
                arr[index3]=nums2[index2];
                index3++;
                index2++;            

            }
        }
        
        while(index1<m)
        {
                arr[index3]=nums1[index1];
                index3++;
                index1++;
        }
        
        while(index2<n)
        {
                arr[index3]=nums2[index2];
                index3++;
                index2++;
        }
        
        nums1.clear();
        
        for(int i=0;i<m+n;i++)
        {
            nums1.push_back(arr[i]);
        }
        
        }
    }
};