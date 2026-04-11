class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int,vector<int>>mp;
        int ans=INT_MAX;
        int flag=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        vector<pair<int,vector<int>>>vec(mp.begin(),mp.end());
        for(auto &i:vec){
            vector<int>x=i.second;
            if(x.size()>=3){
                flag=1;
                for(int j=0;j<x.size()-2;j++){
                    ans=min(ans,2*(abs(x[j]-x[j+2])));
                }
            }
        }
        if(flag==0)return -1;
        return ans;
    }
};