#include<bits/stdc++.h>
using namespace std;
void printName(int i ,string n){
    if(i==0)
      return;

    cout<<n<<"\n";
    printName(i-1 ,n);
}

int main(){
    int i;
    string n;
    cin>>i;
    cin>>n;
    printName(i ,n);
}