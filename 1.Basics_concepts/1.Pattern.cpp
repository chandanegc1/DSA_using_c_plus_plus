#include<bits/stdc++.h>
using namespace std;


void nForest(int n) {
	 
	for(int i = 0 ; i<n ; i++){
		for(int j = 0 ; j<n ; j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
}


void nForest2(int n) {
	 
	for(int i = 1 ; i<=n ; i++){
		for(int j = 0 ; j<i ; j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
}


void nTriangle(int n) {

	for(int i = 1 ; i<=n ; i++){
		for(int j = 1 ; j<=i ; j++){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}

void triangle(int n) {
	// Write your code here
	for(int i = 1 ; i<=n ; i++){
		for(int j = 0 ; j<i ; j++){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
}

void seeding(int n) {
	 
	for(int i = n ; i>0 ; i--){
		for(int j = 1 ; j<=i ; j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
}

void nNumberTriangle(int n) {
     
    for(int i = n ; i>0 ; i--){
		for(int j = 1 ; j<=i ; j++){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}

void nStarTriangle(int n) {
     
    for(int i= 1 ; i<=n; i++){
        for(int j = 1; j<=n-i ;j++)
            cout<<" ";
        for(int j = 1; j<=2*i-1 ;j++)
            cout<<"*";
        for(int j = 1; j<=n-i ;j++)
            cout<<" ";
        cout<<"\n";
    }
}

void nStarTriangle(int n) {
     
    for(int  i = n ; i!=0 ; i--){
        for(int j=i; j<n ;j++)
         cout<<" ";
        for(int j=1 ; j<=2*i-1 ; j++)
         cout<<"*";
        for(int j=i; j<n ;j++)
         cout<<" ";
        cout<<"\n";
    }
}

void nStarDiamond(int n) {
     
    for(int i= 1 ; i<=n; i++){
        for(int j = 1; j<=n-i ;j++)
            cout<<" ";
        for(int j = 1; j<=2*i-1 ;j++)
            cout<<"*";
        for(int j = 1; j<=n-i ;j++)
            cout<<" ";
        cout<<"\n";
    }
    for(int  i = n ; i!=0 ; i--){
        for(int j=i; j<n ;j++)
         cout<<" ";
        for(int j=1 ; j<=2*i-1 ; j++)
         cout<<"*";
        for(int j=i; j<n ;j++)
         cout<<" ";
        cout<<"\n";
    }
}
void nStarTriangle(int n) {
     
    for(int i =1 ; i<=n ;i++){
        for(int j=1;j<=i ; j++)
         cout<<"*";
        cout<<"\n";
    }
    for(int i =1 ; i<=n ;i++){
        for(int j=1;j<=n-i ; j++)
         cout<<"*";
        cout<<"\n";
    }
    
}

void nBinaryTriangle(int n) {
     
    int x =0;
    for(int i =1 ; i<=n ;i++){
        for(int j=1;j<=i ; j++){
            if((i+j)%2!=0){
                cout<<"0 ";
            } 
            else{
                cout<<"1 ";
            }
        }
        cout<<"\n";
    }
}

void numberCrown(int n) {
     
    for(int i =1 ; i<=n; i++){
        for(int j=1 ; j<=i; j++)
          cout<<j<<" ";
          
        for(int j=1 ; j<=2*n-(2*i); j++)
          cout<<" ";
          
        for(int j=i ; j!=0;j--)
          cout<<j<<" ";
        cout<<"\n";
    }
}

void nNumberTriangle(int n) {
    // Write your code here.
    int count=1;
    for(int i=1; i<=n ;i++){
        for(int j= 1 ; j<=i ;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
}
void nLetterTriangle(int n) {
    // Write your code here.
     char count='A';
     for(int i=1; i<=n ;i++){
        for(int j= 0 ; j<i ;j++){
            cout<<char(count+j)<<" ";
        }
        cout<<"\n";
    }
}

void nLetterTriangle(int n) {
    // Write your code here.
    char count='A';
     for(int i=1; i<=n ;i++){
        for(int j= 0 ; j<=n-i ;j++){
            cout<<char(count+j)<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int a;
    cin>>a;
}
