#include <iostream>
using namespace std;
int main()
{	
	int a[4];
	cin>>a[0]>>a[1]>>a[2]>>a[3];
    int count[4]={0};
	for (int i = 0; i < 4; ++i)
    {
        for (int j = i+1; j < 4; ++j)
        {
            if(a[i]==a[j])
                count[j]++;
        }
    }
}