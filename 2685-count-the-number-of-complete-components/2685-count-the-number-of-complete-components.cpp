class Solution {
public:
void dfs(vector<int>&vis,map<int,vector<int>>&mp,int node,int &edges,int &vertices){
    edges+=mp[node].size();
    vertices+=1;
    for(int i=0;i<mp[node].size();i++){
        if(vis[mp[node][i]]==0){
            vis[mp[node][i]]=1;
            dfs(vis,mp,mp[node][i],edges,vertices);
        }
    }
}
    int countCompleteComponents(int n, vector<vector<int>>& e) {
        if(n<=1)return n;
        map<int,vector<int>>mp;
        for(int i=0;i<e.size();i++){
            mp[e[i][0]].push_back(e[i][1]);
            mp[e[i][1]].push_back(e[i][0]);
        }
        int ans=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                int ed=0;
                int ver=0;
                vis[i]=1;
                dfs(vis,mp,i,ed,ver);
                ed/=2;
                if(ed==ver*(ver-1)/2)ans++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna