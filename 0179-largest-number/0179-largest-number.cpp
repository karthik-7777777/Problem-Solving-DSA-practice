class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>st;
         for(auto i:nums){
             st.push_back(to_string(i));
         }
        sort(st.begin(),st.end(),[](auto &a,auto &b){
            return (a+b)>(b+a);
        });
        string ans="";
        for(auto i:st){
            ans+=i;
        }
        if(ans[0]=='0')return "0";
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna