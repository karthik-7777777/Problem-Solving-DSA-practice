class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string ans;
        for(auto i:s){
            if(i=='*')st.pop();
            else{
                st.push(i);
            }
        }
        int n=st.size();
        for(int i=0;i<n;i++){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};