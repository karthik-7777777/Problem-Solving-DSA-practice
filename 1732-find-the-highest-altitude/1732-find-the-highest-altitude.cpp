class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt=0,x=0;
        for(int i=0;i<gain.size();i++){
            x+=gain[i];
            alt=max(alt,x);
        }
        return alt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna