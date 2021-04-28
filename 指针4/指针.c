#include <stdio.h>
int main(void)
{
	int num[2][3] = { {1,2,3},{2,3,4} };
	int(* p)[3] = num;
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("a[%d][%d]=%d  ", i, j, *(*(p+i)+j));
		}
		printf("\n");
	}
	return 0;

}