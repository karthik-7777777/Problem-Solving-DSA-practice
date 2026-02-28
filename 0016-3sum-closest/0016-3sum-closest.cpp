class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int dif=INT_MAX,ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1,k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target){
                    return sum;
                }
                else if(sum>target){
                    if(abs(sum-target)<dif){
                        dif=abs(sum-target);
                        ans=sum;
                    }
                    k--;
                }
                else{
                    if(abs(sum-target)<dif){
                        dif=abs(sum-target);
                        ans=sum;
                    }
                    j++;
                }
            }
        }
        return ans;
    }
};