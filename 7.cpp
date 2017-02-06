#include <iostream>
#include <string>
using namespace std;
int main()
{	
	char s[100];
	cin>>s;
	int up=0;
	int down=0;
	for (int i = 0; s[i]!='\0'; ++i)
	{
		if(s[i]>='A'&& s[i]<='Z')
			up++;
		else
			down++;
	}
	if(up>down)
		for (int i = 0; s[i]!='\0'; ++i)
		{
			if(s[i]>='a'&& s[i]<='z')
				cout<<char(s[i]-32);
			else
				cout<<char(s[i]);
		}
	else
		for (int i = 0; s[i]!='\0'; ++i)
		{
			if(s[i]>='A'&& s[i]<='Z')
				cout<<char(s[i]+32);
			else
				cout<<char(s[i]);
		}
}