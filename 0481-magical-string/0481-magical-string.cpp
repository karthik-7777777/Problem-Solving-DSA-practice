class Solution {
public:
    int magicalString(int n) {
        int ans=0;
        string s="122";
        for(int i=3;i<=n;i++){
            if(i%2==1){
                if(s[i-1]=='1'){
                    s+='1';
                }
                else{
                    s+='1';
                    s+='1';
                }
            }
            else{
                if(s[i-1]=='1'){
                    s+='2';
                }
                else{
                    s+='2';
                    s+='2';
                }
            }
            if(s.size()==n){
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ans++;
            }
        }
        return ans;
    }
};