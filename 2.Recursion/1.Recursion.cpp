#include<bits/stdc++.h>
using namespace std;


void printName(int i ,string n){
    if(i==0)
      return;

    cout<<n<<"\n";
    printName(i-1 ,n);
}



int sum(int n , int i=0){
  if(n==1)
   {
      return i;
  }
  i+=n;
  return sum(n-1 ,i);
}


void reverse(int i , int arr[] , int n){

  if(i>=n/2) return;
  swap(arr[i] ,arr[n-i-1]);
  return reverse(i+1 , arr ,n);
}


bool palindrom(int i , string s){
  if(i>=s.size()/2) return true;

  if((s[i]!=s[s.size()-i-1])) return false;

  return palindrom(i+1 , s);
}


int main(){
   int n;
   cin>>n;
  //  int arr[n];
  //  for(int k=0;k<n ;k++){
  //   cin>>arr[k];
  // }
   cout<<palindrom(0 , "aabaa" );
   
}