class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n= pairs.size();
        sort(pairs.begin(),pairs.end(),[](auto &a,auto &b){
            return a[1]<b[1];
        });
        int cur=INT_MIN,ans=0;
        for(auto i:pairs){
            if(cur<i[0]){
                cur=i[1];
                ans++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna