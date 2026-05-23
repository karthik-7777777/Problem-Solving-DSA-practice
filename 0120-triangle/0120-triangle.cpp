class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        int n=tri.size();
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                tri[i][j]+=min(tri[i+1][j],tri[i+1][j+1]);
            }
        }
        return tri[0][0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna