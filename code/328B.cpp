#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
char a[10][10];
int main()
{
	int w=8,b=1;
	for (int i=1;i<=8;i++) scanf("%s",&a[i]);
	for (int i=0;i<8;i++)
	{
		if (i==3)
		int deb=0;
		int W1=0,B1=9,W2=9,B2=0;
		for (int j=1;j<=8;j++)
		{
			if (a[j][i]=='W') W1=max(W1,j),W2=min(W2,j);
			if (a[j][i]=='B') B1=min(B1,j),B2=max(B2,j);
		}
		if (B1>W2) w=min(W2,w);
		if (W1<B2) b=max(b,B2);
	}

	if (w-1<=8-b) printf("A\n");else printf("B\n");
}
