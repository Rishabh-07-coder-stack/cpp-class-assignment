#include <iostream>
using namespace std;
int main()
{
int n;
int a=0, b=1, c;
cout<<"enter number of team :";
cin>>n;
cout<<"fibonacci series :";
for (int i=1; i<=n; i++){

    cout<<a<<" ";
    c=a+b;
    a = b;
    b=c;
}return 0;}