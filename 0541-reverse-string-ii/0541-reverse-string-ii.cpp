class Solution {
public:
    string reverseStr(string s, int k) {
        if(k>s.size()){
            int st=0,en=s.size()-1;
            while(st<en){
                swap(s[st],s[en]);
                st++;
                en--;
            }
            return s;
        }
        for(int i=0;i<s.size();i+=(2*k)){
            int st=i,en=i+k-1;
            if(en>=s.size())en=s.size()-1;
            while(st<en){
                swap(s[st],s[en]);
                st++;
                en--;
            }
        }
        return s;
    }
};