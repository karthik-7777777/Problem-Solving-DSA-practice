class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0,ans=0;
        int l=0,r=0;
        while(r<arr.size()){
            cout << l <<" " << r << endl;
            if(r<k){
                sum+=arr[r];
                r++;
            }
            else{
                sum=sum-arr[l]+arr[r];
                l++;
                r++;
            }
            if(r-l==k && (sum/k)>=threshold){
                ans++;
            }
        }
        return ans;
    }
};