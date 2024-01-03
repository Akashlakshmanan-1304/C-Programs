#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, i, j,k;
    printf("Enter the value of Row and Column: ");
    scanf("%d%d", &N, &M);
    int array[N][M], temparray[N][M];
    printf("Enter the elements of the array below:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nThe array is:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    printf("\nThe array after 90 degree Rotation:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0,k=M-1; j < M&&k>=0; j++,k--)
        {
//printf("%d",k);
            temparray[i][k] = array[j][i];
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%d\t", temparray[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*Output:
Enter the value of N and M: 3
3
Enter the elements of the array below:
[0][0]: 1
[0][1]: 2
[0][2]: 3
[1][0]: 4
[1][1]: 5
[1][2]: 6
[2][0]: 7
[2][1]: 8
[2][2]: 9

The array is:
1	2	3	
4	5	6	
7	8	9	

The array after 90 degree Rotation:
7	4	1	
8	5	2	
9	6	3
*/