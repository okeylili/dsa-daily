// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    map<int , int> mpp;
    for(int i=0;i<n;i++) {
        mpp[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--) {
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }
    for(auto it: mpp) {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}
