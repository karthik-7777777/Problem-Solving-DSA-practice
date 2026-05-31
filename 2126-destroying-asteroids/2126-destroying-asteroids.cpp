class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ass) {
        long long temp=mass;
        sort(ass.begin(),ass.end());
        int i=0,n=ass.size();
        while(i<n){
            if(temp>=ass[i]){
                temp+=ass[i];
                i++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna