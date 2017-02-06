#include <iostream>
#include <cstdio>
using namespace std;
int main()
{	
	int a;
	cin>>a;
	int zl=0;
	int zr=0;
	int el=0;
	int er=0;
	int ans;
	for (int i = 0; i < a; ++i)
	{
		int l , r;
		cin>>l>>r;
		if(l==0)
			zl++;
		if(r==0)
			zr++;
		if(l==1)
			el++;
		if(r==1)
			er++;
	}
	if(zl<el)
	{
		ans=zl;
	}
	else
	{
		ans=el;
	}
	if(zr<er)
	{
		ans+=zr;
	}
	else
	{
		ans+=er;
	}
	cout<<ans;
}