class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int>dig;
        long long ans=0,s=0;
        while(n){
            int k=n%10;
            if(k!=0)dig.push_back(k);
            n/=10;
        }
        for(int i=0;i<dig.size();i++){
            cout << dig[i] << " ";
        }
        int size=dig.size()-1;
        for(int i=size;i>=0;i--){
            ans=(ans*10)+dig[i];
            s+=dig[i];
        }
        return ans*s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna