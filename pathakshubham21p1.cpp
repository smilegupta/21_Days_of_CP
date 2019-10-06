#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		float b;
		string s;		
		cin>>a>>b;
		cin.ignore();
		getline(cin,s);
		
		a=a+4;
		b=(double)b+4.0;
		
		cout<<a<<endl;
		printf("%.1f",b);
		cout<<endl;
		cout<<"Hacktoberfest "<<s<<endl;
		
	}
}
