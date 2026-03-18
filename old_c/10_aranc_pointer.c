#include <stdio.h>
#include <limits.h>
#define n 3
int main()
{
                                                            //  1  2  3
                                                            //  4  5  6
                                                            //  7  8  9
    
    int matrix[n][n] = {{1,2,3},{4,5,6},{7,8,9}};
    
    int min = INT_MAX; // կամ շատ մեծ թիվ,որ ցիկլի մեջ մինիմումը հաստատ պոխվի առաջին անգամ․օրինակ ՝ 10000000
    for (int i = 0; i < n - 1;i++)
    {
        for (int j = 0; j < n - i - 1;j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }
    printf("Փոքրագույն արժեքը = %d\n", min);

    return 0;
}
