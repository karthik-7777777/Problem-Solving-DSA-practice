class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        set<int>st(arr.begin(),arr.end());
        vector<int>arr1(st.begin(),st.end());
        int f=0,s=0;
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]>f){
                s=f;
                f=arr1[i];
            }
            else if(arr[i]>s){
                s=arr1[i];
            }
        }
        if(s==0)return -1;
        return s;
    }
};