#include <stdio.h>
#define n 3

int main()
{
    int matrix[n][n] = 
    {
        { 1 , 2 , 3 },
        { 4 , 0 , 5 },
        { 6 , 0 , 0 }
    };//                X={4,0,5,6,0,0}
    
    int X[n*n] = {};
    int *k = X;
    int (*ptr)[n];
    int *pts,*ptm;
    
    ptr = matrix;
    
    for(ptr;ptr < matrix + n;ptr++)
    {
        pts = *ptr;
        ptm = *ptr+n;
        
        if((*(pts + (ptr-matrix)) == 0))
        {
            for(pts;pts < ptm;pts++)
            {
                *k = *pts;
                
                printf("%d ",*k);
                
                k++;
                
                
            }
            
        }
        
    }
    
    return 0;
}
