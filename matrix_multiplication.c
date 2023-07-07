#include <stdio.h>
int main()
{
    int a[50][50], b[50][50], product[50][50];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    int sum = 0;

    printf("Enter the rows and columns of the matrix a:");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter the elements of matrix a:\n");
    for (i = 1; i <= arows; i++)
    {
        for (j = 1; j <= acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the rows and columns of the matrix b:");
    scanf("%d %d", &brows, &bcolumns);

    if (brows != acolumns)
    {
        printf("Sorry! We can not multiply the matrices a and b");
    }
    else
    {
        printf("Enter the elements of matrix b:\n");
        for (i = 1; i <= brows; i++)
        {
            for (j = 1; j <= bcolumns; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
    }

    printf("\n");
    for (i = 1; i <= arows; i++)
    {
        for (j = 1; j <= bcolumns; j++)
        {
            for (k = 1; k <= brows; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }

    printf("Resultant Matrix:\n");
    for (i = 1; i <= arows; i++)
    {
        for (j = 1; j <= bcolumns; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}