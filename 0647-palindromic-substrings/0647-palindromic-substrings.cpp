class Solution {
public:
int palchk(string s,int st,int en){
    int exp=0;
    while(st>=0 && en<s.size()){
        if(s[st]==s[en]){
            st--;
            en++;
            exp++;
        }
        else break;
    }
    return exp;
}
    int countSubstrings(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int odd=palchk(s,i,i);
            int even=palchk(s,i,i+1);
            ans+=odd+even;
        }
        return ans;
    }
};