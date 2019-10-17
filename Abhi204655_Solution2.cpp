#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
bool istwistedprime(int n)
{
    int rev = 0;
    int temp = n;

    while(temp != 0)
    {
        rev = (rev*10) + (temp%10);
        temp/=10;
    }
    if(isprime(n) && isprime(rev))
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        if(istwistedprime(n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
