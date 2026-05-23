class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,ans=0;
        vector<int>freq(256,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            while(freq[s[i]]>1){
                freq[s[l]]--;
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna