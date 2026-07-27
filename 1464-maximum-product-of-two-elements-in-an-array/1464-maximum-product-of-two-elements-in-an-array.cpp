class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int x=INT_MIN,y=INT_MIN;
       for(auto n:nums)
       {
        if(n>=x)
        {
            y=x;
            x=n;
        }
        else if(n>y)
        {
            y=n;
        }
       }
       return (x-1)*(y-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna