#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
string st;
char temp;
int i,l;
cout<<"Enter the string : "<<endl;
cin>>st;
l=st.length();
for(i=0;i<l;i=i+2)
{
temp=st[i];
st[i]=st[i+1];
st[i+1]=temp;
}
if(l%2==0)
cout<<"after swapping : "<<st<<endl;
else
cout<<"after swapping : "<<st<<temp<<endl; 
return 0;
} 
