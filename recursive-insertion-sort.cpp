class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        insertionSortHelp(nums, 1, nums.size());
        return nums;
    }
    void insertionSortHelp(vector<int>& nums, int i, int n) {
        if(i==n) return;
        int j=i;
        while(j>=0 && nums[j]<nums[j-1]) {
            swap(nums[j], nums[j+1]);
            j--;
        }
        insertionSortHelp(nums, i+1, n);
    }
};
