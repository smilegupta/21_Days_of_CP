#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n) 
{ 
    
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 



int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int rev=0;
		int digit=0;
		int m=n;
		while(n>0){
			digit=n%10;
			rev=rev*10+digit;
			n=n/10;
		}
		
		if(isPrime(m)==true && isPrime(rev)==true){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
}
