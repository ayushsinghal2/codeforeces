#include <iostream>
#include <cstdio>
using namespace std;
int main()
{	
	int a;
	cin>>a;
	int arr[a];
	float avg=0.0;
	for (int i = 0; i < a; ++i)
	{
		cin>>arr[i];
		avg+=arr[i];

	}
	cout<<(float)avg/a;
}