#include <stdio.h>
#include <stdbool.h>
#define N 7
bool palindrome(int n);
void fill_Array(int rows,int array[]){
    
    printf("ներմուծեք վեկտորի տարրերը\n");
    for(int i = 0;i < rows;i++){
        
            scanf("%d",&array[i]);
        
    }
    
}

int main()
{
    //int array[N] = {4664,77,89,0,2222,132341,-1551};
    int array[N];
    int count = 0,i = 0,j = 0;
    
    printf("\n");
    fill_Array(N,array);
    
    printf("array\n");
    
    for(int k = 0;k < N;k++){
        
        printf("%d ",array[k]);
        
        if(palindrome(array[k]) == true)
        {
            count++;
        }
    }
    
    printf("\n");
    printf("array2\n");
    
    int array2[count];
    
    while(i < N && j < count){
        
        if(palindrome(array[i]) == true)
        {
            array2[j] = array[i];
            
            printf("%d ",array2[j]);
            j++;
        }
        
        i++;
    }
    
    return 0;
}

bool palindrome(int n)
{
    int reversed = 0;
    int original = n;
    while (n > 0) 
    {
        reversed = reversed * 10 + n % 10; 
        n /= 10;
    }
    return reversed == original; 
}
