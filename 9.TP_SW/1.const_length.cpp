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
void subarray(int arr[], int n, int k) {
    int l = 0, maxSum = 0, ansR = 0, ansL = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        while (sum > k && l <= i) {
            sum -= arr[l];
            l++;
        }
        if (sum > maxSum && sum <= k) {
            ansR = i;
            ansL = l;
            maxSum = sum;
        }
    }

    for (int i = ansL; i <= ansR; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    // int arr[] = {-1, 2, 3, 3, 4, 5, -1};
    int arr2[] = {6,2,3,4,7,2,1,7,1};
    // cout<<maxSum(arr,7,4)<<endl;
    subarray(arr2, 9,14);
    return 0;
}