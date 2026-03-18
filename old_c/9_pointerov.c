#include <stdio.h>
#define n 3

int main()
{
                                                            // 1  2  3
                                                            // 4  5  6
                                                            // 7  8  9
                                                            
                                                            //4 7 8 => 8 
    
    int matrix[n][n] = {{1,2,3},{4,5,6},{7,8,9}};
    int (*pm)[n],*ptr,*pmc;
    int max,k;
    
    max = matrix[1][0];
    k = 0;
    pm = matrix;
    
    
    for (pm;pm < matrix+n;pm++)
    {
        ptr = *pm;
        pmc = *pm+k;
        for (ptr;ptr < pmc;ptr++)
        {
            if (*ptr > max)
            {
                max = *ptr;
            }
            
        }
        k++;
    }
    printf("%d",max);
    
    
    return 0;
}

