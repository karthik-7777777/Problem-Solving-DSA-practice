class Solution {
public:
void fun(int i,int next,int low,int high,vector<int>&ans){
    if(i>=low && i<=high){
        ans.push_back(i);
    }
    if(i>high || next>9)return;
    fun((i*10)+next,next+1,low,high,ans);
}
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        for(int i=1;i<=9;i++){
            fun(i,i+1,low,high,ans);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna