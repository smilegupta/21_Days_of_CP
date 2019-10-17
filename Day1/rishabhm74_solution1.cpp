#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
main(){
    int a ;
    double b;
    string c;;
    cout<<"ENter a";
    cin>>a;
    cout<<(a + 4);
    cout<<endl<<"Enter b";
    cin>>b;
    cout<<fixed;;
    cout<<std::setprecision(1)<<(b + 4.0);
    cout<<endl<<"Enter c";
    cin>>c;
    cout<<c<<" is the favourite fest of all developers.";
}
