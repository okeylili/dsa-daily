class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        map<int, int> freq;
        int n = a.size();
        int m = b.size();
        vector<int> res;
        for(int i=0;i<n;i++) {
            freq[a[i]]++;
        }
        for(int i=0;i<m;i++) {
            freq[b[i]]++;
        }
        for(auto &it : freq) {
            res.push_back(it.first());
        }
        return res;
    }
};
