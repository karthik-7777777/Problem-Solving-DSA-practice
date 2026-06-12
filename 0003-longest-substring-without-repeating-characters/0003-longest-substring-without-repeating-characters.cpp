class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,n=s.size();
        int ans=0;
        unordered_set<char>st;
        while(l<n && r<n){
            if(st.find(s[r])==st.end()){
                st.insert(s[r]);
                ans=max(ans,r-l+1);
                r++;
            }
            else{
                while(st.find(s[r])!=st.end()){
                    st.erase(s[l]);
                    l++;
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna