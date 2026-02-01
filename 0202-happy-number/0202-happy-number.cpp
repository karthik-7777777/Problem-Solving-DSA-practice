class Solution {
public:
    bool isHappy(int n) {
        int temp=n,sum;
        set<int>st;
        while(n>1)
        {
            if(st.find(n)!=st.end()){
                break;
            }
            else st.insert(n);
            sum=0;
            while(n>0)
            {
                int r=n%10;
                sum=sum+(r*r);
                n=n/10;
            }
            n=sum;
        }
        if(n==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};