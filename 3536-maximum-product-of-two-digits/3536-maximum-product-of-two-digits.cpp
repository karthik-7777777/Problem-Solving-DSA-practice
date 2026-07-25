class Solution {
public:
    int maxProduct(int n) {
        int maxi1=INT_MIN,maxi2=INT_MIN;
        while(n){
            if(n%10 > maxi1){
                maxi2=maxi1;
                maxi1=n%10;
            }
            else if(n%10>maxi2)maxi2=n%10;
            n/=10;
        }
        return maxi1*maxi2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna