class Solution {
public:
    int bitwiseComplement(int n) {
        int x=0,ans=0;
        while(n){
            if(n%2==0){
                ans+=pow(2,x);
            }
            x++;
            n/=2;
        }
        return ans;
    }
};