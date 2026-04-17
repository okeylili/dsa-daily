class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=0;i<n;i++) {
            for(int j=i+1;i<n;j++) {
                if(arr[i]>arr[j]) {
                    return false;
                }
            return true;
            }
        }
    }
};
