class Solution {
public:
void comb(string digits,map<char,string>mp,string c,int idx,vector<string>&ans){
    if(idx==digits.size()){
        ans.push_back(c);
    }
    string s=mp[digits[idx]];
    for(int i=0;i<s.size();i++){
        c+=s[i];
        comb(digits,mp,c,idx+1,ans);
        c.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        map<char,string>mp({
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
        });
        vector<string>ans;
        comb(digits,mp,"",0,ans);
        return ans;
    }
};