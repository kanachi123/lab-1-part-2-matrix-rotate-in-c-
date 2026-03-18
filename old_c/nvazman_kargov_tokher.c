#include stdio.h
#define n 3
#define m 3
#include stdbool.h
int main()
{
                                                         3  2  1
                                                         4  5  2
                                                         8  7  2
    
    
    int matrix[n][m] = {{3,2,1},{4,5,2},{8,7,2}};
    int i,j;
    bool t;
    for(i = 0;i  n;i++)
    {
        t = false;
        for(j = 1;j  m;j++){
            
            if (matrix[i][j-1] = matrix[i][j]){
                
                t = true;
                
            }
            else
            {
                break;
            }
            
        }
        if(t == true)
        {
            printf(տողի համարը`%dn,i+1);
        }
        
        
        
        
    }
    
    
    return 0;
}
