#include <iostream>
using namespace std;
int main()
{
	int m[3][3];
	int res[3][3];
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin>>m[i][j];
			res[i][j]=1;
		}
	}
	if ((m[1][0]+m[0][1]+m[0][0])%2!=0)
		res[0][0]=0;
	if ((m[1][1]+m[0][2]+m[0][0]+m[0][1])%2!=0)
		res[0][1]=0;
	if ((m[1][2]+m[0][1]+m[0][2])%2!=0)
		res[0][2]=0;
	if ((m[0][0]+m[1][1]+m[2][0]+m[1][0])%2!=0)
		res[1][0]=0;
	if ((m[0][1]+m[1][0]+m[1][2]+m[2][1]+m[1][1])%2!=0)
		res[1][1]=0;
	if ((m[2][2]+m[0][2]+m[1][1]+m[1][2])%2!=0)
		res[1][2]=0;
	if ((m[1][0]+m[2][1]+m[2][0])%2!=0)
		res[2][0]=0;
	if ((m[2][0]+m[1][1]+m[2][2]+m[2][1])%2!=0)
		res[2][1]=0;
	if ((m[1][2]+m[2][1]+m[2][2])%2!=0)
		res[2][2]=0;
	for (int i = 0; i < 3; ++i)
	{
		cout<<res[i][0]<<res[i][1]<<res[i][2]<<endl;
	}
	
	
	
	

}