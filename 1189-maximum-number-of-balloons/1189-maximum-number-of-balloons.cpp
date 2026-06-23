class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        string str="balloon";
        for(auto i:str){
            mp[i]=0;
        }
        for(auto i:text){
            if(find(str.begin(),str.end(),i)!=str.end()){
                mp[i]++;
            }
        }
        int mini=INT_MAX;
        int mini2=min(mp['o'],mp['l']);
        for(auto i:mp){
            mini=min(mini,i.second);
        }
        if(mini==0 || mini2<=1)return 0;
        if(mini*2 == mini2)return mini;
        return min(mini,mini2/2);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna