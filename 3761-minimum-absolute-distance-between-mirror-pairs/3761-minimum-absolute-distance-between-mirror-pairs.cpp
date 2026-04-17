class Solution {
public:
int rev(int x){
    int a=0;
    while(x){
        a=(a*10)+x%10;
        x/=10;
    }
    return a;
}
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                ans=min(ans,i-mp[nums[i]]);
            }
            int r=rev(nums[i]);
            mp[r]=i;
        }
        if(ans==INT_MAX)return -1;
        else return ans;
    }
};