#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n[5][5];
	int posi = 0;
	int posj = 0;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cin>>n[i][j];
			if(n[i][j]==1)
			{
				posi=i;
				posj=j; 
			}
		}
	}
	//minswap would be |posi - 2| + |posi - 2|
	cout<<abs(posi-2) + abs(posj-2);

}