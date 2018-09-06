
//define library
#include<iostream>
using namespace std;
//main programme
int main()
{
int n;
//Taking input from user
cout<<"Please enter the size of square size pattern"<<endl;
cin>>n;
//adding loop command
for (int i=1;i<=n; i++)
	{
	for (int j=1;j<=n; j++)
	{cout<<"*";
	}
//to change the line
cout<<endl;
	}
 return 0;
 }
