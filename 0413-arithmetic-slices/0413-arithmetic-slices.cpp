class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3)return 0;
        int l=0,r=1,ans=0;
        int diff=nums[l]-nums[r];
        while(r<n-1){
            if((nums[r]-nums[r+1])==diff){
                r++;
            }
            else{
                if((r-l+1)>2){
                    int m=r-l+1;
                    ans+=((m-1)*(m-2))/2;
                }
                l=r;
                r++;
                if(r<n)diff=nums[l]-nums[r];
            }
        }
        if((r-l+1)>2){
            int m=r-l+1;
            ans+=((m-1)*(m-2))/2;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna