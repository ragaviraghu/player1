#include<iostream>
using namespace std;
int main()
{
string a;
cout<<"Enter the string : "<<endl;
getline(cin,a);
int n=a.length();
if(a[0]>91)
{
a[0]=a[0]-32;
}
for(int i=1;i<n;i++)
{
if(a[i]<91 && a[i]!=' ')
a[i]=a[i]+32;
}
for(int i=1;i<n;i++)
{
if(a[i]==' ')
{
if(a[i+1]>91)
a[i+1]=a[i+1]-32;
}
}
cout<<"New String is : "<<a;
return 0;
}
