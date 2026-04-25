class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int maxsum = INT_MIN;
        int currentsum=0;
        for(int i =0;i<n;i++) {
            currentsum+=arr[i];
        if(currentsum>maxsum) {
            maxsum=currentsum;
        }
        if(currentsum<0) {
            currentsum = 0;
        }
        }
        return maxsum;
    }
};
