#include <iostream>
#include <cstdio>
using namespace std;
int main()
{	
	int a;
	cin>>a;
	int min;
	cin>>min;
	int max = min;
	int count =0;
	for (int i = 1; i < a; ++i)
	{
		int value;
		cin>>value;
		if(value > max)
		{
			count++;
			max=value;
		}
		if(value < min)
		{
			count++;
			min=value;
		}
	}
	cout<<count;
}