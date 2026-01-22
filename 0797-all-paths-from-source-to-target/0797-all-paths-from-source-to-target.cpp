class Solution {
public:
void path(vector<vector<int>>& graph,int idx,vector<int>&p,vector<vector<int>>& ans,int n){
    if(idx==n){
        ans.push_back(p);
        return;
    }
    for(int i=0;i<graph[idx].size();i++){
        p.push_back(graph[idx][i]);
        path(graph,graph[idx][i],p,ans,n);
        p.pop_back();
    }
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>p;
        int n=graph.size()-1;
        p.push_back(0);
        path(graph,0,p,ans,n);
        return ans;
    }
};