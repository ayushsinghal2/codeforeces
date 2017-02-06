#include <iostream>
using namespace std;
int main()
{
	char borze[500];
	cin>>borze;
	for (int i = 0; borze[i]!='\0'; ++i)
	{
		if(borze[i]=='.')
		{
			cout<<0;
		}
		else if(borze[i]=='-'&& borze[i+1]=='.')
		{
			cout<<1;
			i++;
		}
		else if(borze[i]=='-' && borze[i+1]=='-')
		{
			cout<<2;
			i++;
		}
	}
}