#include<iostream>
using namespace std;
void swap(int &a , int &b){
    int temp = a;
    a=b;
    b=temp;
}

void print(int arr[] , int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void selection(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
    print(arr , n);
}

void bubble(int arr[] ,int n){
    for(int i=0; i<n-1 ;i++){
        int sort = 0;
        for(int j=0; j<n-i-1 ;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
                sort++;
            }
        }
        if(!sort) break;
    }
    print(arr , n);
}

// void insertion(int arr[] , int n){
//     for(int i = 0; i<n-1;i++){
//         int j;
//         if(arr[i]>arr[i+1]){
//             for(j= i ; j!=0 ;j--){
//                 if(arr[j]<arr[j-1]){
//                     swap(arr[i], arr[j-1]);
//                     break;
//                 }
//             }
//            if(j==0) swap(arr[0], arr[i]);
//         }
//     }
//     print(arr , n);
// }


int main(){
    int arr[] = {1,4,6,3,9,5};
    // selection(arr ,6);
    // bubble(arr ,6);
    // insertion(arr ,6);
}