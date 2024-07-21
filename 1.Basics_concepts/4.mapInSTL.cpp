#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int l=0;
    unordered_map<char , int>mp;
    string str = "chandan";
    int n = str.size();
    for(int i = 0 ; i<n ; i++){
        mp[str[i]]=1;
    }
    for(int i = 0 ; i<n ; i++){
        if(mp[str[i]]==1){
            l+=1;
        }else{
          
        }

    }
}
