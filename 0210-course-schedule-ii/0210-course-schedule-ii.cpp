class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(auto it:prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        vector<int>indeg(numCourses,0);
        for(auto it:adj){
            for(int i=0;i<it.size();i++){
                indeg[it[i]]++;
            }
        }
        queue<int>q;
        for(int i=0;i<indeg.size();i++){
            if(indeg[i]==0)q.push(i);
        }
        vector<int>ans;
        while(q.size()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node]){
                indeg[it]--;
                if(indeg[it]==0)q.push(it);
            }
        }
        if(ans.size()!=numCourses)return {};
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna