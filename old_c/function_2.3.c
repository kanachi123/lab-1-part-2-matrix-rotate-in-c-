#include <stdio.h>
#define N 6 
int sumofdgt(int n);

 
void fill_Array(int rows,int array[]){
    
    printf("ներմուծեք վեկտորի տարրերը\n");
    for(int i = 0;i < rows;i++){
        
            scanf("%d",&array[i]);
        
    }
    
}
int main()
{
    // 8+8 > 1+5+3
    
    //int array[N] = {153,88,4,90,6,310};
    int array[N];
    fill_Array(N,array);
    int max = sumofdgt(array[0]);
    int j = 0,m;
    
    for(int i = 0;i <N;i++){
        
        m = sumofdgt(array[i]);
        if(max <= m)
        {
            max = m;
            j = i;
        }
    }
    printf("array[%d] = %d",j,array[j]);

    return 0;
}

int sumofdgt(int n){
    
    int sum = 0;
    int m = 0;
    while(n != 0)
    {
        m = n % 10;
        n = n/10;
        sum += m;
    }
    
    return sum; 
}
