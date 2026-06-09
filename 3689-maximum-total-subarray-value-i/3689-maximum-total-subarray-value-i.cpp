class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxi=*max_element(nums.begin(),nums.end());
        long long mini=*min_element(nums.begin(),nums.end());
        return (maxi-mini)*k;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna