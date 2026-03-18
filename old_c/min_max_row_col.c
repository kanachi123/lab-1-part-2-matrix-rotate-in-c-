#include <stdio.h>
#include <stdlib.h>
#define n 3
#define m 3

int main()
{
                                                                        // 3 2 9
                                                                        // 4 5 10
                                                                        // 5 6 11
    int matrix[n][m] ={{3,2,9},{4,5,10},{5,6,11}};
    int k = 0;
    int max;
    int min;
    int (*ptr)[m];
    int (*o)[m];
    int *jj;
    
    k = 0;
    ptr = matrix;
    
    
    while(ptr < matrix+n)
    {

        max = **ptr;
        int *pm = *ptr;
        int *pn = *ptr+m;
        
        for(pm;pm < pn;pm++)
        {
            
            if (max < *pm)
            {
                max = *pm;
                jj = pm;
            }
        }
        
        min = max;
        o = matrix;
        
        while(o < matrix+n)
        {
            
            if ( min > *(*o + (jj-(*ptr))))
            {
                
                min = *(*o+(jj-(*ptr)));
                
            }
        
            o++;
        }
        
        if(max == min)
            {
                printf("%d թիվը իր տողում մեծագույնն է,իսկ սյունում փոքրագույնը\n",min);
                k++;
            }
    
        ptr++;
    }
    
    
    if(k == 0){
        
        printf("nooooooooooo\n");
        
    }

return 0;
}

