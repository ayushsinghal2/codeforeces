#include <iostream>
#include <cstdio>
using namespace std;
int main()
{	
	char s[100];
	cin>>s;
	int c1=0;
	int c2=0;
	int c3=0;
	for (int i = 0; s[i]!='\0'; ++i)
	{
		if(s[i]=='1')
			c1++;
		if(s[i]=='2')
			c2++;
		if(s[i]=='3')
			c3++;
	}
	for (int i = 0; i < c1-1; ++i)
	{
		cout<<1<<'+';
	}
	for (int i = 0; i < c2-1; ++i)
	{
		cout<<2<<'+';
	}
	for (int i = 0; i < c3-1; ++i)
	{
		cout<<3<<'+';
	}
	if(c1==1&&c2==0&&c3==0)
		cout<<1;
	if(c1==0&&c2==1&&c3==1)
		cout<<2;
	if(c1==0&&c2==0&&c3==1)
		cout<<3;
	if(c1==1&&c2==1&&c3==0)
		cout<<1<<"+"<<2;
	if(c1==0&&c2==1&&c3==1)
		cout<<2<<"+"<<3;
	if(c1==1&&c2==0&&c3==1)
		cout<<1<<"+"<<3;
	if(c1==1&&c2==1&&c3==1)
		cout<<1<<"+"<<2<<"+"<<3;
	if(c2==0&&c3==0)
		cout<<1;
	if(c3==0&&c2!=0)
		cout<<2;
	if(c1!=1&&c2!=1&&c3!=1)
		cout<<3;
}