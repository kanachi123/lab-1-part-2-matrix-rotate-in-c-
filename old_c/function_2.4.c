#include <stdio.h>
#include <stdbool.h>
#define N 6

 
void fill_Array(int rows,int array[]){
    
    printf("ներմուծեք վեկտորի տարրերը\n");
    for(int i = 0;i < rows;i++){
        
            scanf("%d",&array[i]);
        
    }
    
}
bool oddoreven(int n);
int main()
{
    //int array[N] = {555,686,443,0,-444,22};
    int array[N];
    fill_Array(N,array);
    printf("\n");
    int count = 0;
    
    for(int i = 0;i < N;i++){
        
        
        
        if(oddoreven(array[i]) == true)
        {
            count++;
        }
    }
    
    int array2[count];
    int i = 0, j = 0;
    while(i < N && j < count) {
        
        if(oddoreven(array[i]) == true)
        {
            array2[j] = array[i];
            j++;
        }
        i++;
    }
    printf("array1\n");
    for(int i = 0;i < N;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("array2\n");
    for(int j = 0;j < count;j++)
    {
        printf("%d ",array2[j]);
    }

    return 0;
}


bool oddoreven(int n){
    int m;
    while (n != 0){
        
        m = n % 10;
        n /= 10;
        if(m % 2 != 0)
        {
            
            return false;
        }
    }
    return true;
}
