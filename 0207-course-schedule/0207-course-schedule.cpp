class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        vector<vector<int>>adj(numCourses);
        for(auto it:pre){
            adj[it[1]].push_back(it[0]);
        }
        vector<int>indeg(numCourses,0);
        for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj[i].size();j++){
                indeg[adj[i][j]]++;
            }
        }
        queue<int>q;
        int courses=0;
        for(int i=0;i<indeg.size();i++){
            if(indeg[i]==0)q.push(i);
        }
        while(q.size()){
            int node=q.front();
            q.pop();
            courses++;
            for(auto it:adj[node]){
                indeg[it]--;
                if(indeg[it]==0)q.push(it);
            }
        }
        if(courses==numCourses)return true;
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna