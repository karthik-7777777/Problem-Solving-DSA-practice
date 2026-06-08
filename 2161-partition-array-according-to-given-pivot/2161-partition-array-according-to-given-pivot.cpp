class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>left;
        vector<int>right;
        vector<int>mid;
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<pivot)
            {
                left.push_back(nums[i]);
            }
            else if(nums[i]>pivot)
            {
                right.push_back(nums[i]);
            }
            else
            {
                mid.push_back(nums[i]);
            }
        }
        res.insert(res.end(),left.begin(),left.end());
        res.insert(res.end(),mid.begin(),mid.end());
        res.insert(res.end(),right.begin(),right.end());
        
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna