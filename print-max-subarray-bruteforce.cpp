#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to find maximum sum of subarrays
    int maxSubArray(vector<int>& nums) {
        
        /* Initialize maximum sum with 
        the smallest possible integer*/
        int maxi = INT_MIN; 

        // Iterate over each starting index of subarrays
        for (int i = 0; i < nums.size(); i++) {
            
            /* Iterate over each ending index
            of subarrays starting from i*/
            for (int j = i; j < nums.size(); j++) {
                
                // Variable to store the sum of the current subarray
                int sum = 0; 

                // Calculate the sum of subarray nums[i...j]
                for (int k = i; k <= j; k++) {
                    sum += nums[k];
                }

                /* Update maxi with the maximum of its current 
                value and the sum of the current subarray*/
                maxi = max(maxi, sum);
                
            }
        }
        
        // Return the maximum subarray sum found
        return maxi; 
    }
};

int main() {
    vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    //create an instance of Solution class
    Solution sol;
    
    int maxSum = sol.maxSubArray(arr);
    
    //Print the max subarray sum
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
