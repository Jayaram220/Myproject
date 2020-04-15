#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Findsqre(int sq)
{
	printf("patti");
	return sq*sq;
}

int main(int n,char *argv[])
{
	for(int i=0; i < n; i++)
	{
		int sq = atoi(argv[i]);
		printf("%d\n",Findsqre(sq));
	}

}
