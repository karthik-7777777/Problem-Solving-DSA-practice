class Solution {
public:
    int minOperations(string s) {
        int x=0,y=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                if(s[i]!='0')x++;
                else y++;
            }
            else{
                if(s[i]!='1')x++;
                else y++;
            }
        }
        return min(x,y);
    }
};