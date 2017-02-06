#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{	
	int a ; int b;
	cin>>a>>b;
	for (int i = a+1; i <= b; ++i)
	{	int flag=0;
		for (int j = 2; j <= i/2; ++j)
		{
			if(i%j==0)
				{
					flag=1;
					break;
				}
		}
		if(flag==0)
		{
			if(i==b)
				{
					cout<<"YES";
					exit(0);
				}
			break;
		}
	}
	cout<<"NO";
}