class Solution {
public:
    int findMin(vector<int>& nums) {
        int r=nums.size()-1;
        int l=0;
        while(r>l){
            int m=(r+l)/2;
            if(m>0){
                if(nums[m]<nums[m-1])return nums[m];
            }
            if(m<nums.size()-1){
                if(nums[m+1]<nums[m])return nums[m+1];
            }
            if(nums[m]>nums[l])l=m;
            else if(nums[r]>nums[m])r=m;
        }
        return nums[0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna