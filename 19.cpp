#include <iostream>
#include <cstdio>
using namespace std;
int main()
{	
	int a;
	cin>>a;
	int max = 0 ;
	int count = 0;
	for (int i = 0; i < a; ++i)
	{
		int entry , exit;
		cin>>exit>>entry;
		count -= exit;
		count += entry;
		if(count>max)
			max=count;
	}
	cout<<max;
}