class Solution {
public:
bool bs(vector<int>& nums,int start,int end,int target){
    while(start < end)
    {
        int mid=(start+end)/2;
        if(nums[mid]==target){
            return true;
        }
        else if(target > nums[mid]){
            start=mid+1;
        }
        else end=mid-1;
    }
    return false;
}
    bool search(vector<int>& nums, int target) {
        int x;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1]){
                x=i;
                break;
            }
        }
        bool h1=bs(nums,x+1,nums.size()-1,target);
        bool h2=bs(nums,0,x,target);
        if(h1 || h2)
        {
            return true;
        }
        else return false;
    }
};