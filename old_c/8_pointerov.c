#include <stdio.h>
#define n 3
#define m 4
int main()
{
    // -1  2  -3  4
    // -5  -6  -7  8
    // -9 10 -11 12
    int matrix[n][m] = { {-1,2,-3,4},{-5,-6,-7,8},{-9,10,-11,12} };
    int i, j, k;
    int(*ptr)[m];



    for (j = 0; j < m; j++)
    {
        k = 0;
        ptr = matrix;
        while (ptr < matrix + n)
        {
            if ((*(*ptr + j)) < 0)
            {
                k++;
            }
            ptr++;
        }
        ptr = matrix;
        if (k == n)
        {
            while (ptr < matrix + n)
            {
                (*(*ptr + j)) = 0;
                ptr++;
            }
        }
    }

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < m; j++)
        {

            printf("%d ", matrix[i][j]);

        }
        printf("\n");
    }



    return 0;
}
