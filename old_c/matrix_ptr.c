#include <stdio.h>
#include <math.h>
#define n 2
#define m 2
                                // 1 2
                                // 3 6
int main()
{
    int matrix[n][m] = {{1,2},{3,6}};
    int *ptmax,*ptr;
    double sum = 0;
    int i = 0 ,j = 0,k = 0,jj;
    
    for(i = 0;i < n;i++){
        
        ptmax = (*(matrix+i));
        
        for(j = 0;j < m;j++)
        {
            
            if (*(ptmax+j) > *ptmax){
                
                ptmax = (ptmax+j);
                jj = j;
            }
            sum += *(*(matrix+i)+j);
        }
        for(k = 0;k < n;k++){
           
           sum += *(*(matrix+k)+jj);
          
       }
       sum -= *ptmax;//qani vor hatman kety erku angam gumarum
       
       printf("%lg\n",sum);
       sum = 0;
       
    
}

    return 0;
}

