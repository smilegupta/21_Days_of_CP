#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;float b;
		cin>>n;
		cin>>b;
		float rem=0.0;
		if(n>b){
			cout<<fixed<<setprecision(2)<<b<<endl;	
		}
		else if(n%5==0 && n<b){
			rem=b-n-0.5;
			cout<<fixed<<setprecision(2)<<rem<<endl;
		}
		else if(n%5!=0 && n<b){
			cout<<fixed<<setprecision(2)<<b<<endl;
		}
		
	}
}
