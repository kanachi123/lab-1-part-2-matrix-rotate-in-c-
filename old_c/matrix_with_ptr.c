#include <stdio.h>
#define n 2
#define m 2

int main(){
                                                //  5  2
                                                //  3  6
    
    int i ,j,jj;
    int matrix[n][m] = {{5,2},{3,6}};
    double minptktk = 1,tmpptktk = 1;
    int (* ptr)[m],(*pts)[m],(*ptm)[m];
    
    ptr = matrix;
    pts = ptr + n;
    ptm = ptr;
    
    for(ptm ;ptm < pts;ptm++)  
    { 
        tmpptktk*= *(*ptm+0);
    }
    
    pts = ptr;
    minptktk = tmpptktk;
    tmpptktk = 1;
    
    for(i = 0;i < n;i++){
        tmpptktk = 1;
        
        for(ptm;ptm < pts;ptm++)
        {
            tmpptktk*= *(*ptm+i);
        }
        
        if (tmpptktk <= minptktk)
        {
            minptktk = tmpptktk;
            jj = i; 
        }
        
    }
    printf("minimum artadryaly ` %d syunum\n",jj);
    
    return 0;
}