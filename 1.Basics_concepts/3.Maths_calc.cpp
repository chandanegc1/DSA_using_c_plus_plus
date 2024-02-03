#include<bits/stdc++.h>
using namespace std;

long reverseBits(long n) {
    // Write your code here.
    long long ans = 0;
	while(n!=0){
		int digit = n%10;
		ans=ans*10+digit;
		n=n/10;
	}
	return ans;
}

bool palindrome(int n)
{
    // Write your code here
        if(n<0){
            return false;
        }

        long long temp = n;
        long long ans = 0;

	    while(temp!=0){
		int digit = temp % 10;
		ans = (ans*10)+digit;
		temp /= 10;
	    }
        return (ans == n);
}

bool checkArmstrong(int x){
	//Write your code here
	long long n = x;
	long long ans = 0;
	while(n!=0){
		int digit = n%10;
		ans += (digit*digit*digit);
		n/=10;
	}
	return(x==ans);
}

int calcGCD(int n, int m){
    // Write your code here.
    int x,y;
        while(n){
        x = max(n,m);
        if(x==n) 
          y=m;
         else
          y=n;
        n = x-y;
        m=y;
    }
    return y;
}

int main(){
    int a;
    cin>>a;
    cout<<a;
}
