class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<pair<int,int>>v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int s=0,mid,e=n-1;
        while(s<=e)
        {
            mid=(s+e)/2;
            if(v[mid].first==target)
            {
                return v[mid].second;
            }
            else if(v[mid].first>target)
            {
                e=mid-1;
            }
            else if(v[mid].first<target)
            {
                s=mid+1;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna