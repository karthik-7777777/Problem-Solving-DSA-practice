class Solution {
public:
    int mirrorDistance(int n) {
        int x=0;
        int temp=n;
        while(temp>0)
        {
            x=(x*10)+(temp%10);
            temp=temp/10;
        }
        return abs(x-n);
    }
};