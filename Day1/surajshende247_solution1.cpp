//Problem 1:(Data type challenge)	

#include<bits/stdc++.h>
using namespace std;
main()
{	
	 
		int a;
		float b;
		string c="",k="Hacktoberfest ";
		
		cin>>a>>b;
		cin.ignore();
		getline (cin, c); 
		cout<<int(a+b);
		cout<<"\n"<<b+int(b);
		c=k+c;
		cout<<endl<<c;
	
}
