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


    for (j = 0; j < m; j++)
    {
        k = 0;
        for (i = 0; i < n; i++)
        {

            if (matrix[i][j] < 0)
            {
                k++;
            }

        }
        if (k == n)
        {
            
            for (i = 0;i < n;i++)
            {
                matrix[i][j] = 0;
                
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

