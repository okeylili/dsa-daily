class Solution{
public:
    void reverse(int arr[], int n){
        int n = arr.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++) {
            ans[i]= arr[n-1-i];
        }
    }
};


class Solution{
public:
    void reverse(int arr[], int n){
        int n = arr.size();
        int p1=0;
        int p2= n-1;
        while(p1<p2) {
            swap(arr[p1], arr[p2]);
            pi++;
            p2--;
        }
    }
};
