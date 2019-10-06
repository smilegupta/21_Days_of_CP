#include<bits/stdc++.h>
using namespace  std;
int main(){
    int  k,t;
    cin>>t;
    while(t--){
    cin>>k;
    int flag1=0,flag2=0;
    for(int i=2;i<=sqrt(k);i++){
        if(k%i==0){
            flag1=1;
        }
    }
    int temp = k,rem,rev=0;
    if(flag1==0){
        while(temp!=0){
            rem = temp%10;
            rev=rev*10+rem;
            temp/=10;
        }
    }else cout<<"NO"<<endl;
    for(int i=2;i<=sqrt(k);i++){
        if(rev%i==0){
            flag2=1;
        }
    }
    if(flag1==0 && flag2==0){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
        
    }
    
}
