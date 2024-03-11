#include <iostream>
using namespace std;
#include<vector>;

void addTwoArray(int arr1[] ,int arr2[] ,int x , int y){
    int temp[100];
    int n = x+y;
    int i =0;
    int right = 0;
    int left = 0;
    while(x>right && left<y){
        if(arr1[right]<=arr2[left]){
            temp[i]=arr1[right];
            right++;
            ++i;
        }
        else{
            temp[i]=arr2[left];
            left++;
            ++i;
        }
    }

cout<<"dfd "<<right<<endl;
    while(right<x){
        temp[i]=arr1[right];
        right++;
        ++i;
    }
    while(left<y){
        temp[i]=arr2[left];
        left++;
        i++;
    }
    for(int i = 0; i<n;i++){
        cout<<temp[i]<<" ";
    }

}

int main(){
    int arr1[] = {1 ,4,5,6,7 , 8};
    int arr2[] = {2 ,3,4,5,6,7 };
    addTwoArray(arr1 , arr2, 6 ,6);

}