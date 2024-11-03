#include <bits/stdc++.h>
using namespace std;

void swap(int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void Heapify(vector<int> &arr, int i, int size) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int max = i;

    if (left < size && arr[max] < arr[left]) {
        max = left;
    }
    if (right < size && arr[max] < arr[right]) {
        max = right;
    }

    if (i != max) {
        swap(arr[max], arr[i]);
        Heapify(arr, max, size);
    }
}

void BuildHeap(vector<int> &arr) {
    int size = arr.size();

    for (int i = size / 2 - 1; i >= 0; i--) {
        Heapify(arr, i, size);
    }
}

// Delete Maximum element from Binary heap
void deleteMax(vector<int>& arr) {
    int size = arr.size();
    if (size == 0) return;
    swap(arr[0], arr[size - 1]);
    arr.pop_back();

    Heapify(arr, 0, arr.size());
}

int main() {
    vector<int> arr = {9, 4, 6, 3, 9, 5};
    BuildHeap(arr);
    deleteMax(arr);

    // Printing the heapified array after deleting the max element
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
