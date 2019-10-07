#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum1=0;int sum2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n/2;i++){
            sum1+=arr[i];
        }
        for(int i=n/2;i<n;i++){
            sum2+=arr[i];
        }
        cout<<sum1*sum2<<endl;
    }
}
