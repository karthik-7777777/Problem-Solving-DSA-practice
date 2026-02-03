class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=0;
        int chk=0;
        while(i<nums.size()-1){
            if(nums[i]>nums[i+1]){
                chk++;
                break;
            }
            else{
                i++;
            }
        }
        if(i==0)return false;
        while(i<nums.size()-1){
            if(nums[i]<nums[i+1]){
                chk++;
                break;
            }
            else{
                i++;
            }
        }
        while(i<nums.size()-1){
            if(nums[i]>nums[i+1]){
                chk++;
                break;
            }
            else{
                i++;
            }
        }
        if(chk==2 && i>=nums.size()-1){
            return true;
        }
        return false;
    }
};