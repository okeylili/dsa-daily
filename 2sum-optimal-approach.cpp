class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> numwindex;
        for(int i=0;i<n;i++) {
            numwindex.push_back({nums[i], i});
        }
        sort(numwindex.begin(), numwindex.end());
        int left=0;
        int right=n-1;
        while(left<right) {
            int sum = numwindex[left].first + numwindex[right].first;
            if(sum==target) {
                return {numwindex[left].second, numwindex[right].second};
            }
            else if(sum<target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {};
    }
};
