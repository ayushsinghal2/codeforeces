#include <iostream>
#include <string.h>
int main()
{
	char s[100];
	std::cin>>s;
	char y[100];
	std::cin>>y;
	if(strcmp(s,y)==0)
		std::cout<<0;
	else if(strcmp(s,y)<0)
		std::cout<<-1;
	else
		std::cout<<1;
}