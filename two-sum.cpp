// Problem: Two Sum
// Platform: LeetCode
// Link: https://leetcode.com/problems/two-sum/

// Approach:
// - Use hashmap to store visited elements
// - Check if complement exists

// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if(mp.count(complement)) {
            return {mp[complement], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}
