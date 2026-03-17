class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string ans="";
        int n=dictionary.size();
        for(int i=0;i<n;i++){
            int j=0,k=0;
            string t=dictionary[i];
            while(j<s.size() && k<t.size()){
                if(s[j]==t[k]){
                    j++;
                    k++;
                }
                else j++;
                if(k==t.size()){
                    if(ans.size()<t.size())ans=t;
                    else if(ans.size()==t.size())ans=min(ans,t);
                }
            }
        }
        return ans;
    }
};