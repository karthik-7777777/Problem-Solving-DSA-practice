class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int x=100,y=100;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<x){
                y=x;
                x=nums[i];
            }
            else if(nums[i]<y){
                y=nums[i];
            }
        }
        return x+y+nums[0];
    }
};