#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n ;
	int m ;
	cin>>n>>m;
	char line[n];
	cin>>line;
	for (int j = 0; j < m; ++j)
	{
		for (int i = 1; i < n; ++i)
		{
			if(line[i]=='G' && line [i-1] == 'B')
			{
				line[i-1]='G';
				line[i]='B';
				i++;
			}
		}
	}
	
	puts(line);
}