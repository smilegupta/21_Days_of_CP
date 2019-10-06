#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if(n==1)    return false;
    for(int i=2;i<=sqrt(n);++i)
    {
        if(n%i==0)  return false;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    for(int x=0;x<t;++x)
    {
        int a,b=0;
        cin>>a;
        int temp = a;
        bool a_is_prime = isprime(a);
        if(a_is_prime)
        {
            while(temp)
            {
                int rem = temp%10;
                b = b * 10 + rem;
                temp = temp / 10;
            }
            if(isprime(b))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
