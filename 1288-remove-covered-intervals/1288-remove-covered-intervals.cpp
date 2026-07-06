class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& inte) {
        sort(inte.begin(),inte.end(),[](auto &a,auto &b){
            if(a[0]==b[0])return a[1]>b[1];
            return a[0]<b[0];
        });
        int ans=1,i=0,j=1,n=inte.size();;
        while(i<n && j<n){
            if(inte[j][0]>=inte[i][0] && inte[i][1]>=inte[j][1]){
                j++;
            }
            else{
                i=j;
                j++;
                ans++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna