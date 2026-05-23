class Solution {
public:
    int totalFruit(vector<int>& f) {
        map<int,int>mp;
        int l=0,ans=0;
        for(int i=0;i<f.size();i++){
            mp[f[i]]++;
            while(mp.size()>2){
                mp[f[l]]--;
                if(mp[f[l]]==0){
                    mp.erase(f[l]);
                }
                l++;
            }
            int sum=0;
            for(auto i:mp){
                sum+=i.second;
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna