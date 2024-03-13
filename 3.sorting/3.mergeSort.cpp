#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
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
    for(int i = low; i <= high; i++){ 
        arr[i] = temp[i - low]; 
    }
}

void mergeSort(vector<int> &arr, int low, int high){
    if(low < high){ 
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main(){
    vector<int> arr = {9, 4, 6, 3, 9, 5};
    mergeSort(arr, 0, arr.size() - 1); 
    print(arr);
    return 0;
}
