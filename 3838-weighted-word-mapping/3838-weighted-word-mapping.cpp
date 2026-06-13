class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        string str="zyxwvutsrqponmlkjihgfedcba";
        for(int i=0;i<words.size();i++){
            int sum=0;
            for(auto ch:words[i]){
                sum+=weights[ch-'a'];
            }
            int mod=sum%26;
            ans+=str[mod];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna