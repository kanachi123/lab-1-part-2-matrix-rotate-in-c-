#include <stdio.h>
#define n 3

int main()
{
                                                            // 1  2  3
                                                            // 4  5  6
                                                            // 7  8  9
                                                            
                                                            //4 7 8 => 8 
    
    int matrix[n][n] = {{1,2,3},{4,5,6},{7,8,9}};
    int max;
    
    max = matrix[1][0];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (matrix[i][j] > max){
                
                max = matrix[i][j];
            }
        }
    }
    printf("%d",max);
    
    
    return 0;
}
