class Solution {
public:
     
  void reverse(vector<int> & arr,int start, int last)
  {
    while(start<last)
    {
        int temp=arr[start];
        arr[start]=arr[last];
        arr[last]=temp;
        start++;
        last--;
    }


}
void rotate(vector<int>& nums, int k){

    if(k==0)
        return;

    k=k%nums.size();
    reverse(nums,0,nums.size()-1);
    reverse(nums,k,nums.size()-1);
    reverse(nums,0,k-1);

  }
};