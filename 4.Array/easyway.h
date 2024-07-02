#include<bits/stdc++.h>
using namespace std;

void printv(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}

void printa(int arr[] , int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void swap(int &a , int &b){
    int temp = a;
    a = b;
    b=temp;
}

int maxa(int arr[] , int n){
    int mini = INT_MIN;
    for(int i =0; i<n; i++){
        int mini = max(mini , arr[i]);
    }
    return mini;
}

int maxv(vector<int>arr){
    int mini = INT_MIN;
    for(int i =0; i<arr.size(); i++){
        int mini = max(mini , arr[i]);
    }
    return mini;
}

void inputa(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >>arr[i];
    }
}

void inputv(vector<int>arr){
    for(int i = 0; i < arr.size(); i++){
        int temp;
        cin >>temp;
        arr.push_back(temp);
    }
}
