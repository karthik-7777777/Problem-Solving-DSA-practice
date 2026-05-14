class Solution {
public:
    bool isGood(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        if(nums[n]>n)return false;
        for(auto i:nums){
            mp[i]++;
        }
        if(mp.size()==n && mp[n]==2)return true;
        else return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna