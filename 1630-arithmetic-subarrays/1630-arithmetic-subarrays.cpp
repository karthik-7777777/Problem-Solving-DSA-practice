class Solution {
public:
bool chk(int st,int en,vector<int>& nums){
    int diff=nums[st+1]-nums[st];
    int j=st+1;
    bool c=true;
    while(j<=en){
        if((nums[j]-nums[j-1])!=diff){
            c=false;
            break;
        }
    }
    if(c)return true;
    vector<int>temp(nums.begin()+st,nums.begin()+en+1);
    sort(temp.begin(),temp.end());
    int s=0,r=1;
    diff=temp[1]-temp[0];
    while(r<temp.size()-1){
        if((temp[r+1]-temp[r])!=diff){
            return false;
        }
        r++;
    }
    return true;
}
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int i=0;i<l.size();i++){
            ans.push_back(chk(l[i],r[i],nums));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna