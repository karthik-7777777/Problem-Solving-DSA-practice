class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int st=0,en=0;
        while(en<s.size()){
            if(s[en]==' ' || en==(n-1)){
                int space=en;
                if(s[en]==' ')en--;
                while(st<en){
                    swap(s[st],s[en]);
                    st++;
                    en--;
                }
                st=space+1;
                en=space+1;
            }
            else en++;
        }
        return s;
    }
};