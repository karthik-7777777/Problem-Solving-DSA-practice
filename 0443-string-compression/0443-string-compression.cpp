class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";
        int st=0,en=0;
        while(en<chars.size()){
            if(chars[st]!=chars[en]){
                ans+=chars[st];
                stack<int>sk;
                int len=en-st;
                if(len>1){
                    while(len){
                    sk.push(len%10);
                    len/=10;
                    }
                    while(sk.size()){
                        ans+=(sk.top()+'0');
                        sk.pop();
                    }
                }
                st=en;
            }
            else{
                en++;
            }
        }
        ans+=chars[st];
        stack<int>sk;
        int len=en-st;
        if(len>1){
            while(len){
            sk.push(len%10);
            len/=10;
            }
            while(sk.size()){
                ans+=(sk.top()+'0');
                sk.pop();
            }
        }
        chars.clear();
        for(auto c:ans){
            chars.push_back(c);
        }
        return ans.size();
    }
};