class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        map<int,int>mp;
        int l=0,ans=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp[0]>k){
                mp[nums[l]]--;
                l++;
            }
            ans=max(ans,mp[1]+mp[0]);
        }
        ans=max(ans,mp[1]+mp[0]);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna