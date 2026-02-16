class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans;
        // if(s.size()<=10){
        //     return ans;
        // }
        string st;
        map<string,int>mp;
        for(int i=0;i<10;i++){
            st+=s[i];
        }
        int r=10;
        mp[st]++;
        while(r<s.size()){
            st.erase(0,1);
            st+=s[r];
            mp[st]++;
            r++;
        }
        for(auto i:mp){
            if(i.second > 1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};