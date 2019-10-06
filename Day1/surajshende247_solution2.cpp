#include<bits/stdc++.h>
using namespace std;
int main()
{
	  int arr[100],T=0;
	  cin>>T; 
	  if(T>=1 && T<=100)
	  {
	  
		  for(int j=0;j<T;j++)
		  { 
			cin>>arr[j];
		  }
		  
		  
		  for(int j=0;j<T;j++)
		  {
		  
			  int n, i,check1=1,check2=1,rev=0,rem=0;
			  		  
			  n=arr[j];
			  
				  for(i = 2; i <= n / 2; ++i)
				  {
				      if(n % i == 0)
				      {
				          check1 = 0;
				          break;
				      }
				  }
				  
				  while(n<0)
				  {
				  	rem=n%10;
				  	rev=(rev*10)+rem;
				  	n=n/10;
				  }
				  
				  for(i = 2; i <= rev / 2; ++i)
				  {
				      if(rev % i == 0)
				      {
				          check2 = 0;
				          break;
				      }
				  }
				  
				  if(check1==1 && check2==1)
				  {
				  	cout<<"Yes"<<endl;
				  }
				  else 
				  {
				  	cout<<"No"<<endl;
				  }
		 }
	}
}
