class Solution {
public:
    string processStr(string s) {
        string ans="";
        for(auto i:s){
            if(i>='a' && i<='z')ans+=i;
            else if(i=='*'){
                if(!ans.empty()){
                    ans.pop_back();
                }
            }
            else if(i=='#')ans+=ans;
            else if(i=='%')reverse(ans.begin(),ans.end());
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna