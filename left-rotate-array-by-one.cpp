// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n =arr.size();
        if(n==0) return;
        int temp = arr[0];
        for(int i =1;i<n;i++) {
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
    }
};
