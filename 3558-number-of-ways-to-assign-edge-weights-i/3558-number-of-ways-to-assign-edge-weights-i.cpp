class Solution {
public:
void rec(unordered_map<int,vector<int>>& ch,int parent,int node,int h,int& depth){
    
    depth=max(h,depth);

    for(auto i:ch[node]){
        if(i!=parent)rec(ch,node,i,h+1,depth);
    }
}
    int assignEdgeWeights(vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>ch;
        for(int i=0;i<edges.size();i++){
            ch[edges[i][0]].push_back(edges[i][1]);
            ch[edges[i][1]].push_back(edges[i][0]);
        }
        int depth=0;
        rec(ch,-1,1,0,depth);
        long long ans=1;
        for(int i=1;i<depth;i++){
            ans=(ans*2)%1000000007;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna