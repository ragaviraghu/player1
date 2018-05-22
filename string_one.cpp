#include <iostream>
using namespace std;
int main() 
{
string a,b;
int n,m,count=0;
cout<<"Enter the strings : "<<endl;
cin>>a>>b;
n=a.length();
m=b.length();
if(m==n)
{ 
for(int i=0;i<n;i++)
{
if(a[i]!=b[i])
{
count++;
}
}
if(count==0)
{
cout<<"Strings are same"<<endl;
}
else if(count==1)
{
cout<<"Yes(strings differ by only one character)"<<endl;
}
else
{
cout<<"No(strings doesn't differ dy only one character)"<<endl;	
}
}
else
{
cout<<"No"<<endl;
}
return 0;
}
