#include <iostream>
#include <cstdio>
using namespace std;
int main()
{	
	char first[100];
	char second[100];
	gets(first);
	gets(second);
	for (int i = 0; first[i]!='\0'; ++i)
	{
		if(first[i]==second[i])
			cout<<0;
		else
			cout<<1;
	}
}