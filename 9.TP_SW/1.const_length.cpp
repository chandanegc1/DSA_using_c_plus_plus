#include<bits/stdc++.h>
using namespace std;
// 1# find maximum sum of size k consicutive elements
int maxSum(int arr[], int n, int k){
    int sum=0;
    int maxsum = 0;
    for(int i=0; i<k;i++){
        sum+=arr[i];
    }
    maxsum = sum;
    int r = k;
    for(int i = 0 ; r<n; i++){
        sum-=arr[i];
        sum+=arr[r]; r++;
        if(sum>maxsum) maxsum = sum;
    }
    return maxsum;
}

// 2# find the maximum subarray lenght that is ans>=k

int main(){
    int arr[] = {-1, 2, 3, 3, 4, 5, -1};
    cout<<maxSum(arr,7,4)<<endl;
    return 0;
}