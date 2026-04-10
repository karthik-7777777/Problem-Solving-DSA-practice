class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ass) {
        stack<int>st;
        int i=0,n=ass.size();
        while(ass[i]<0 && i<n){
            st.push(ass[i]);
            i++;
        }
        while(i<n){
            if(ass[i]>0 || st.empty() || st.top()<0){
                st.push(ass[i]);
                i++;
            }
            else{
                if(-ass[i] < st.top()){
                    i++;
                }
                else if(-ass[i] == st.top()){
                    st.pop();
                    i++;
                }
                else if(-ass[i] > st.top()){
                    st.pop();
                }
            }
        }
        vector<int>ans;
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};