//346.
#include <stdio.h>

int index_sum(int n,int array[n]);

int main()
{
    float n;
    
    printf("nermuceq zangvaci chapy\n");
    scanf("%f",&n);
    
    while(n <= 0 || (n-(int)n) != 0)
    {
        printf("ayn petq e bnakan lini\nporceq noric\n");
        scanf("%f",&n);
    }
    
    int array[(int)n];
    
    printf("nermuceq zangvaci tarrery\n");
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("sum of indices >>> %d",index_sum(n,array));

    return 0;
}

int index_sum(int n,int array[n]){
    
    int max = array[0];
    int sum_i = 0;
    
    
    for(int i = 0;i < n;i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }
    
    for(int i = 0;i < n;i++)
    {
        if(max == array[i])
        {
            sum_i+=i;
        }
    }
    
    return sum_i;
}
