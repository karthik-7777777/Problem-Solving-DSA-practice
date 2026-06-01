class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size()==1)return cost[0];
        sort(cost.begin(),cost.end(),greater<int>());
        int ans=0,i=0;
        while(i<cost.size()){
            ans+=cost[i];
            cout << ans << " ";
            if(i+1 < cost.size())ans+=cost[i+1];
            cout << ans << endl;
            i+=3;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna