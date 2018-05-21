#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
string a,b;
int m,n,count1=0,count2=0;
cout<<"Enter the two strings :"<<endl;
cin>>a>>b;
m=a.length();
n=b.length();
for(int i=0;i<m;i++)
{
for(int j=i+1;j<m;j++)
{
if(a[i]==a[j])
count1++;
}
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(b[i]==b[j])
count1++;
}
}
if(count1==count2)
{
cout<<"Yes(given strings are isomorphic)"<<endl;
}
else
{
cout<<"No(given strings are not isomorphic)"<<endl;
}
return 0;
}
