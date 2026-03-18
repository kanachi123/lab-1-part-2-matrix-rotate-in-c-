#include <stdio.h>
#define n 3
#define m 4

int main()
{
    int matrix[n][m] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int  j, k;
    int (*ptr)[m],(*ptm)[m];
    
    ptr = matrix+1;
    ptm = matrix + n;
    for (ptr; ptr < ptm;ptr++)
    {
         
        for (k = 0; k < m; k++)
        {
            if (*(*matrix+k) != *(*ptr+k))
            break;
        }

        if (k == m)
        {
            printf("%d-n toxy ev %d-rd toxy nman en\n", 1, (int)(ptr-matrix + 1));
        }

    }
    
    return 0;
}

