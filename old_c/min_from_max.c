#include <stdio.h>
#define n 3
#define m 3
                                                                //  140  12  14
                                                                //  4    6    4
                                                                //  888 888  44

int main()
{
    int matrix[n][m] = {{140,12,14},{4,6,4},{888,888,44}};
    int i,j,k;
    int max[m],minmax;
    int (* ptr)[m];
    
    max[0] = matrix[0][0];
    
    
    for(ptr = matrix;ptr < matrix+m;ptr++)
    {
        k = (ptr-matrix);
        
        for(j = 0;j < n;j++)
        {
            if (*(*(matrix+j)+k) >= *(max+j))
            {
                *(max+k) = *(*(matrix+j)+k);
            }
        }
        printf("%d\n",*(max+k));
    }
    
    minmax = max[0];
    
    for(i = 0;i < m;i++)
    {
        
        if(minmax >= *(max+i))
        {
            minmax = *(max+i);
        }
        
    }
    printf("mecaguyneric pokraguyny ` %d",minmax);
    
    return 0;
}

