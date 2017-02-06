#include <iostream>
using namespace std;
int main()
{
	int a ;
	cin>>a;
	while(a-- > 0)
	{
		char s [100];
		cin>>s;
		int len;
		for (len = 0; s[len]!='\0'; ++len);
		if(len>10)
			cout<<s[0]<<len-2<<s[len];
		else
			cout<<s<<endl;
	}
}