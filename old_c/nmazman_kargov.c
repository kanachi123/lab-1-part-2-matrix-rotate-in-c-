#include <stdio.h>
#define n 3
#define m 3
#include <stdbool.h>
int main()
{
                                                        // 3  2  1
                                                        // 4  5  2
                                                        // 8  7  2
    
    
    int matrix[n][m] = {{3,2,1},{4,5,2},{8,7,2}};
    int i,j;
    bool t;
    int (*ptr)[m],*pts,*ptm;
    ptr = matrix;
    
    for(ptr;ptr < matrix+n;ptr++)
    {
        t = false;
        pts = *ptr+1;
        ptm = *ptr+m;
        for(pts;pts < ptm;pts++){
            
            if (*(pts-1) >= *pts){
                
                t = true;
                
            }
            else
            {
                break;
            }
            
        }
        if(t == true)
        {
            printf("տողի համարը`%d\n",(int)(ptr-matrix)+1);
        }
    }
    
    
    return 0;
}