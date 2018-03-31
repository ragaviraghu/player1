#include<iostream>
using namespace std;
int main()
{
int N,r;
cout<<"Enter the number : "<<endl;
cin>>N;
cout<<"The Reverse of given number is : ";
while(N>0)
{
r=N%10;
cout<<r;
N=N/10;
}
return 0;
}
