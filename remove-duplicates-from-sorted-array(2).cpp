class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        //if(nums.empty()) return 0;
        int n = arr.size();
        int i=0;
        for(int j =1;j<n;j++) {
            if(arr[i]!=arr[j]) {
                i++;
                arr[i]=arr[j];
            }
        }
        arr.resize(i+1);
        return arr;
    }
};
