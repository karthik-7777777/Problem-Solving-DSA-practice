class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum=0,l=0,r=0,maxi=sum;
        while (r < arr.size()) {
            sum += arr[r];

            if (r < k - 1) {
                r++;
            } else {
                maxi = max(maxi, sum);
                sum -= arr[l];
                l++;
                r++;
            }
        }
        return maxi;
    }
};