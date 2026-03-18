#include <stdio.h>
#define n 2
#define m 2

int main(){
                                                //  5  2
                                                //  3  6
    
    int i ,j,jj;
    int matrix[n][m] = {{5,2},{3,6}};
    double minptktk = 1,tmpptktk = 1;
    
    for(j = 0 ;j < m;j++)  
    { 
        tmpptktk*=matrix[j][0];
    }
    
    minptktk = tmpptktk;
    
    tmpptktk = 1;
    
    for(i = 0;i < n;i++){
        tmpptktk = 1;
        
        for(j = 0 ;j < m;j++)
        {
            tmpptktk*=matrix[j][i];
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