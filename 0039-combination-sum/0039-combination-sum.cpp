class Solution {
public:
void rec(set<vector<int>>& ans,vector<int>& can,vector<int>& t,int sum,int target){
    if(sum==target){
        vector<int>arr;
        arr=t;
        sort(arr.begin(),arr.end());
        ans.insert(arr);
        return;
    }
    if(sum>target){
        return;
    }
    for(int i=0;i<can.size();i++){
        t.push_back(can[i]);
        rec(ans,can,t,sum+can[i],target);
         t.pop_back();
    }
}
    vector<vector<int>> combinationSum(vector<int>& can, int target) {
        set<vector<int>>ans;
        vector<int>t;
        rec(ans,can,t,0,target);
        vector<vector<int>>anss(ans.begin(),ans.end());
        return anss;
    }
};