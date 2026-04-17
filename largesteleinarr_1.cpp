class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int nmax = arr[0];
        for(int i=0;i<n;i++) {
            if(arr[i]>nmax) {
                nmax=arr[i];
            }
        }
        return nmax;
    }
};
