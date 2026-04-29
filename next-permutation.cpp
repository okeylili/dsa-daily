class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        vector<vector<int>> all;
        sort(nums.begin(), nums.end());
        do {
            all.push_back(nums.begin(), nums.end());
        } while(next_permutation(nums.begin(), nums.end()));

        for(int i=0;i<nall.size();i++) {
            if (all[i]==nums) {
                if (i==(all.size()-1)) {
                    return all[0];
                }
                return all[i+1];
            }
        }
        return nums;
    }
};
