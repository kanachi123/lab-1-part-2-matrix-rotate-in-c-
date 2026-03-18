#include <stdio.h> 
#define N 3 

int main()
{
    int matrix[N][N] =
    {
        { 1 , 2 , 0 },
        { 4 , 0 , 5 },
        { 1 , 0 , 0 }
    };                  //                X={2,0,0,0,5,0}

    int X[N*N] = {};
    int k = 0;
    int (*ptr)[N];
    int (*pts)[N];
    ptr = matrix;
    
    for (ptr; ptr < matrix + N; ptr++) 
    {
        
        if (*(*ptr + N - 1 - (ptr - matrix)) == 0) 
        {
            for (pts = matrix;pts < matrix + N; pts++) {
                
                X[k] = *(*pts+N-1-(ptr-matrix));
                printf("%d ",X[k]);
                k++;
            }
            printf("\n");
        }
    }

    
    return 0;
}
