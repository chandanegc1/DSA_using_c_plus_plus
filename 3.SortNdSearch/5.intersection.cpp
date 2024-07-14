#include<bits/stdc++.h>
using namespace std;

// print the elements of a vector
void print(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// find the intersection of two sorted arrays
void intersection(vector<int> &arr1, vector<int> &arr2){
    int i = 0, j = 0;
    vector<int> intersect;

    // Traverse both arrays using two pointers
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            intersect.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    // Print the intersection array
    cout << "Intersection: ";
    print(intersect);
}

int main(){
    // Initialize two arrays
    vector<int> arr1 = {9, 4, 6, 3, 9, 5};
    vector<int> arr2 = {5, 9, 4, 8, 2};

    // Sort the arrays
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    // Print the sorted arrays
    cout << "Array 1: ";
    print(arr1);
    cout << "Array 2: ";
    print(arr2);

    // Find and print the intersection
    intersection(arr1, arr2);

    return 0;
}
