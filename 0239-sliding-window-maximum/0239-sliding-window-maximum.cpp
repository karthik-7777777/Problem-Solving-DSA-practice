class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>ans;
        int r=0;
        dq.push_front(nums[r]);
        r++;
        while(r<k){
            while(!dq.empty() and dq.back()<nums[r])dq.pop_back();
            dq.push_back(nums[r]);
            r++;
        }
        ans.push_back(dq.front());
        int l=0;
        while(r<nums.size()){
            if(!dq.empty() and dq.front()==nums[l])dq.pop_front();
            while(!dq.empty() and dq.back()<nums[r])dq.pop_back();
            dq.push_back(nums[r]);
            ans.push_back(dq.front());
            r++;
            l++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna