class Solution {
public:
void per(string s,int i,string str,vector<string>&ans){
    if(i==s.size()){
        ans.push_back(str);
        return;
    }
    if(s[i]>=65&&s[i]<=98 || s[i]>=97&&s[i]<=122){
        if(s[i]>=65&&s[i]<=90){
            str+=s[i];
            per(s,i+1,str,ans);
            str.pop_back();
            str+=(s[i]+32);
            per(s,i+1,str,ans);
            str.pop_back();
        }
        else{
            str+=s[i];
            per(s,i+1,str,ans);
            str.pop_back();
            str+=(s[i]-32);
            per(s,i+1,str,ans);
            str.pop_back();
        }
    }
    else{
        str+=s[i];
        per(s,i+1,str,ans);
        str.pop_back();
    }
 
}
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        per(s,0,"",ans);
        return ans;
    }
};