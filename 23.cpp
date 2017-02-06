#include <iostream>
using namespace std;
int main()
{
	char s[100];
	cin>>s;
	for (int i = 0; s[i] != '\0' ; ++i)
	{
		for (int j = i+1;s[j] != '\0' ; ++j)
		{
			if(s[i]<s[j])
			{
				char temp = s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	cout<<s;
	int count = 1;
	for (int i = 1; s[i]!='\0'; ++i)
	{
		if(s[i]!=s[i-1])
			count++;
	}
	if(count %2 ==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
}