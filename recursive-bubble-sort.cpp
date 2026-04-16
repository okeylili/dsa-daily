class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        bubbleSortHelp(nums, nums.size());
        return nums;
    } 
    void bubbleSortHelp(vector<int>& nums, int n) {
        int didSwap=0;
        if(n==1) return;

        for(int j=0;j<=n-2;j++) {
            if(nums[j]>nums[j+1]) {
                swap(nums[j],nums[j+1]);
                didSwap=1;
            }
        }
        if(didSwap==0) return;
        bubbleSortHelp(nums, n-1);
    }
};
