#include <stdio.h>
#define n 3
#define m 4
int main()
{
                                                                        // 1  2  3  4 // 4  3  2  1
                                                                        
                                                                        // 5  6  7  8 // 8  7  6  5
                                                                
                                                                        // 9 10 11 12 // 12 11 10 9
    int matrix[n][m] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int temp;
    
    int (*ptr)[m];
    ptr = matrix;
    
    // տպում ենք մատրիցը սկղբնական ձևով
    for(int i = 0;i < n;i++){
        
        for(int j = 0;j < m;j++){
            
            printf("%d ",matrix[i][j]);
            
        }
        printf("\n");
        
    }
    printf("\n");
    
    
    while(ptr <= matrix + n-1)
    {
        int *pm = *ptr; // տվյալ տողի առաջին անդամի հասցեն
        int *pn = *ptr+m-1;//տվյալ տողի վերջին անդամի հասցեն
        
        
        while((pm <= *ptr+m/2) && (pn >= *ptr+m/2))
        {
            
            temp = *pm;
            *pm = *pn;
            *pn = temp;
            pm++;
            pn--;
            
        }
        
        ptr++;
    }
    
    //տպում ենք արդյունքը
    for(int i = 0;i < n;i++){
        
        for(int j = 0;j < m;j++){
            
            printf("%d ",matrix[i][j]);
            
        }
        printf("\n");
        
    }
    
    return 0;
}

