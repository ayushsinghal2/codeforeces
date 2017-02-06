#include <iostream>
#include <cstdio>
using namespace std;
int main()
{	
	int a;
	cin>>a;
	if(a==1)
	{
		cout<<-1;
		exit(0);
	}
	for (int i = 1; i < a; ++i)
	{
		cout<<i+1<<" ";		
	}
	cout<<1;
}