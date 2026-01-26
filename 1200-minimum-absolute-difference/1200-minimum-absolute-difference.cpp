class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int dif=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            int x=abs(arr[i]-arr[i+1]);
            if(x<dif){
                dif=x;
                ans.clear();
                vector<int>t;
                t.push_back(arr[i]);
                t.push_back(arr[i+1]);
                ans.push_back(t);
            }
            else if(x==dif){
                vector<int>t;
                t.push_back(arr[i]);
                t.push_back(arr[i+1]);
                ans.push_back(t);
            }
        }
        return ans;
    }
};