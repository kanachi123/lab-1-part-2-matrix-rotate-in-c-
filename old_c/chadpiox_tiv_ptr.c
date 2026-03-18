#include <stdio.h>
#define n 3
#define m 3
int main()
{
    int matrix[n][m] = {{1, 3, 1}, {4, 5, 6}, {7, 8, 9}};
    int toxer[n] = {0};
    int count = 0;
    int flag;
    int (*ptr)[m],*pr,*pm;
    
    ptr = matrix;
    
    for (ptr; ptr < matrix + n; ptr++)
    {
        flag = 1;
        pr = *ptr;
        pm = pr + 1;
        for (pr; pr < *ptr+m-1; pr++)
        {
            for (pm; pm < *ptr+m; pm++)
            {
                    if (*pr == *pm)
                    {
                        flag = 0;
                        break;
                    }
            }
            
            if (flag == 0)
                {
                    break;
                }
        }
        
        if (flag == 1)
        {
            *(toxer+count) = (int)(ptr-matrix + 1);
            count++;
        }
    
        
    }
    
        if (count == 0)
            {
                printf("NO\n");
            }
        else
        {
                printf("chhamnknox tarrerov toxeri hamar(y/nery)`\n");
                
                for (int i = 0; i < count; i++)
                    {
                        printf("%42d\n", *(toxer+i));
                    }
                printf("\n");
        }

return 0;
}

