#include <iostream>
using namespace std;
int main()
{
	char year [4];
	cin>>year;
	int a,b,c,d;
	a = int(year[0] - '0');
	b = int(year[1] - '0');
	c = int(year[2] - '0');
	d = int(year[3] - '0');
	while(1)
	{
		d++;
		if(d==10)
		{
			d=0;
			c++;
		}
		if(c==10)
		{
			c=0;
			b++;
		}
		if(b==10)
		{
			b=0;
			a++;
		}
		if(a!=b&&b!=c&&c!=d&&a!=c&&a!=d&&b!=d)
			break;
	}
	cout<<a<<b<<c<<d;
}