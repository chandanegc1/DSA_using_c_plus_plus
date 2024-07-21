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
void maxSubarray(int arr[], int n, int k) {
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

// 3# Maximum Point you can obtain from cards 
void maxPointCards(int arr [], int k , int n){
    int ans =0 , maxsum = 0 ;
    for(int i = 0 ; i<k ; i++){
        ans+=arr[i];
    }

    maxsum=ans;
    int rindex = n-1;
    for(int i = k-1; i>=0;i--){
        maxsum-= arr[i];
        maxsum+=arr[rindex];
        rindex--;
        ans = max(ans , maxsum);
    }
    cout<<ans<<endl;
}

// 4# Longest Substring without repeating characters
void LongSubString(string str){
    unordered_map<char , int>mp;
}

// 5# Max consecutive , zero flip 1 a/c to k value
void maxConsecutive(int arr[], int n , int k){
    int ans =0, zeroLen = 0 , mxlen = 0;
    for(int i = 0 ; i<n ; i++){
        if(arr[i]==0 || arr[i]==1 && zeroLen<=k){
            if(arr[i]==0)
               zeroLen++;
            mxlen++;
        }else{
            zeroLen=1;
            mxlen=1;
        }
        ans=max(ans,mxlen);
    }
    cout<<ans<<endl;
} 
int main(){
    // int arr[] = {-1, 2, 3, 3, 4, 5, -1};
    // int arr2[] = {6,2,3,4,7,2,1,7,1};
    // cout<<maxSum(arr,7,4)<<endl;
    // maxSubarray(arr2, 9,14);
    // maxPointCards(arr2, 4,9);
    int arr3[] = {1,1,1,0,0,0,1,1,1,1,0};
    maxConsecutive(arr3 , 11 , 2);
    return 0;
}