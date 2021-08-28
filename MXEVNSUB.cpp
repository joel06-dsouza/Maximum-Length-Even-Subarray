#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		cin>>a;
		int result=a*(a+1)/2;
		if(result%2==0)
		{
			cout<<a<<endl;
		}
		else
		{
			cout<<a-1<<endl;
		}
	}
}