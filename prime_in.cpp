#include<iostream>
using namespace std;
int main()
{ 
int a,b,i,j,count=0,flag=0;
cout<<"Enter starting & ending number : "<<endl;
cin>>a>>b;
for(i=a; i<=b; i++)
{
count=0;
for(j=2; j<i; j++)
{
if(i%j==0)
{
count++;
break;
}
}
if(count==0)
{
flag++;
}
}
cout<<"The number of prime numbers from "<<a<<" to "<<b<<" is "<<flag;
return 0;
}
