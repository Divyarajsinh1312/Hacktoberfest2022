#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mat[3][3][3];

    //Input
    for (int i = 0; i < 2; i++)
    {
        printf ("\nEnter the matrix %d", i + 1);
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf ("\nElement [%d : %d] : ", j + 1, k + 1);
                scanf ("%d", &mat[i][j][k]);
                mat[2][j][k] = 0;
            }
        }
    }

    //Output
    printf("\nmultiplication of mat1 and mat2 is :");
    for (int i = 0; i < 3; i++)
	{
        printf("\n");
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				mat[2][i][j] = mat[2][i][j] + mat[0][i][k] * mat[1][k][j];
			}
            printf("\t%d", mat[2][i][j]);
		}
	}
    return 0;
}
