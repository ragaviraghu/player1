#include<iostream>
#include<algorithm>
using namespace std;
int main()
{string S;
cout<<"Enter the string : "<<endl;
cin>>S;
reverse(S.begin(),S.end());
cout<<"Reversed string is : "<<S<<endl;
return 0;
}
