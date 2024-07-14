#include<bits/stdc++.h>
#include <cstdlib> 
using namespace std;

void print(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int pivoteFun(vector<int> &arr, int low, int high) {
        // Random pivot selection
        int pivotIndex = low + rand() % (high - low + 1);
        int pivot = arr[pivotIndex];
        swap(arr[pivotIndex], arr[low]);

        int left = low + 1;
        int right = high;

        while (left <= right) {
            while (left <= right && arr[left] <= pivot) 
                left++;
            while (left <= right && arr[right] > pivot) 
                right--;
            if (left < right)
                swap(arr[left], arr[right]);
        }
        swap(arr[low], arr[right]);
        return right;
    }

    void quickSort(vector<int> &arr, int low, int high) {
        if (low < high) {
            int pivot = pivoteFun(arr, low, high);
            quickSort(arr, low, pivot - 1);
            quickSort(arr, pivot + 1, high);
        }
    }

    void insertionSort(vector<int> &arr, int low, int high) {
        for (int i = low + 1; i <= high; ++i) {
            int key = arr[i];
            int j = i - 1;
            while (j >= low && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    vector<int> sortArray(vector<int> &nums) {
        srand(time(NULL));
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
    
int main(){
    vector<int>arr = {9, 4, 6, 3, 9, 5};
    sortArray(arr );
    print(arr);
    return 0;
}
