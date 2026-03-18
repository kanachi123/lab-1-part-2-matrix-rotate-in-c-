#include <stdio.h>
#include <limits.h>
#define n 3
int main()
{
                                                            //  1  2  3
                                                            //  4  5  6
                                                            //  7  8  9
    
    int matrix[n][n] = {{1,2,3},{4,5,6},{7,8,9}};
    
    //կամ շատ մեծ թիվ,որ ցիկլի մեջ մինիմումը  առաջին անգամ հաստատ պոխվի․օրինակ ՝ 10000000
    int min = INT_MAX;
    
    int (*ptr)[n] = matrix;
    
    
    for (ptr; ptr < matrix+n-1;ptr++)
    {
        int *pn = *ptr;
        int *pm = *ptr+n-(ptr-matrix)-1;
        for (pn; pn < pm;pn++)
        {
            if (*pn < min)
            {
                min = *pn;
            }
        }
    }
    printf("Փոքրագույն արժեքը = %d\n", min);

    return 0;
}
