class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        set<int>f,e;
        for(auto i:edges){
            f.insert(i[0]);
            e.insert(i[1]);
        }
        vector<int>ans;
        for(auto i:f){
            if(e.find(i)==e.end())ans.push_back(i);
        }
        return ans;
    }
};