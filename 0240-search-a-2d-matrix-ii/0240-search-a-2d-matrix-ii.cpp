class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat[0].size();
        for(auto i:mat)
        {
            if(target >=i[0] && target <= i[n-1])
            {
                int start=0,end=n-1;
                while(start<=end)
                {
                    int mid=(start+end)/2;
                    if(i[mid]==target)return true;
                    else if(i[mid]>target)end=mid-1;
                    else start=mid+1;
                }
            }
        }
        return false;
    }
};