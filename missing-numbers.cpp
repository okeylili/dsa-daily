class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n= arr.size() + 1;
        long long real = n*(n+1)/2;
        long long given=0;
        for(int i=0;i<arr.size();i++) {
            given+=arr[i];
        }
        long long missing = real-given;
        return missing;
    }
};
