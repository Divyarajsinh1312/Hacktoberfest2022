#include <stdio.h>
int main()
{
	int mat1[3][3];
	int mat2[3][3];
	int mat3[3][3];
	int i, j, k, l;
	//input
	printf("\nEnter the elements matrix 1 : ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\nelement [%d : %d] = ", i + 1, j + 1);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("\nEnter the elements matrix 2 : ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\nelement [%d : %d] = ", i + 1, j + 1);
			scanf("%d", &mat2[i][j]);
		}
	}
	//output
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			mat3[i][j] = 0;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{
				mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];
			}
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (mat3[i][j] == mat2[i][j])
			{
				l = 2;
			}
			else if (mat3[i][j] == mat1[i][j])
			{
				l = 1;
			}
			else if (mat3[i][j] != mat1[i][j] && mat3[i][j] != mat2[i][j])
			{
				l = 0;
				break;
			}
		}
	}
	if (l == 2)
	{
		printf("\nmatrix 1 is identity");
	}
	else if (l == 1)
	{
		printf("\nmatrix 2 is identity");
	}
	else if (l == 0)
	{
		printf("\nNone of the above matrix is identity");
	}

	return 0;
}
