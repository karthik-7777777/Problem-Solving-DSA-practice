class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char>s(word.begin(),word.end());
        map<char,int>mp;
        int ans=0;
        for(auto i:s){
            if(i>='A' && i<='Z'){
                mp[i]++;
                if(mp[i]==2)ans++;
            }
            else{
                mp[i-32]++;
                if(mp[i-32]==2)ans++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna