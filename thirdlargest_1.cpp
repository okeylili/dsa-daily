class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        return arr[n-3];
    }
};
