class Solution {
public:
void com(int k,int n,int idx,vector<int>a,vector<vector<int>>&ans){
    if(a.size()==k){
        int sum=0;
        for(int i=0;i<k;i++)sum+=a[i];
        if(sum==n)ans.push_back(a);
        return;
    }
    for(int j=idx;j<=9;j++){
        a.push_back(j);
        com(k,n,j+1,a,ans);
        a.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>a;
        com(k,n,1,a,ans);
        return ans;
    }
};