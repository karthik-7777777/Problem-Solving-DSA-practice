class Solution {
public:
int GCD(int n1,int n2){
    while(n2!=0){
        int temp=n1%n2;
        n1=n2;
        n2=temp;
    }
    return n1;
}
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>maxi(n);
        maxi[0]=nums[0];
        for(int i=1;i<n;i++)maxi[i]=max(maxi[i-1],nums[i]);
        vector<int>preGcd(n);
        for(int i=0;i<n;i++){
            preGcd[i]=GCD(maxi[i],nums[i]);
        }
        sort(preGcd.begin(),preGcd.end());
        int st=0,en=n-1;
        long long ans=0;
        while(st<en)ans+=GCD(preGcd[en--],preGcd[st++]);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna