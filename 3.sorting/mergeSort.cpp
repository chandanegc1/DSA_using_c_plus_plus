#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

void add(vector<int> arr1 ,vector<int> arr2){
    vector<int> arr3;
    int n = arr1.size()+arr2.size();
    for(int i = 0 ;i<n;i++){
        if(arr1.size() > i) 
          arr3.push_back(arr1[i]);
        else 
           arr3.push_back(arr2[i-arr1.size()]);
    }
    print(arr3);
}

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int right = mid + 1;
    int left = low;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i <= high; i++){ // Adjusted loop range to copy back to original array
        arr[i] = temp[i - low]; // Adjusted index for temp array
    }
}

void mergeSort(vector<int> &arr, int low, int high){
    if(low < high){ // Base case to terminate recursion
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main(){
    vector<int> arr = {9, 4, 6, 3, 9, 5};
    // mergeSort(arr, 0, arr.size() - 1); // Pass the correct high index
    add(arr , arr);
    // print(arr);
    return 0;
}
